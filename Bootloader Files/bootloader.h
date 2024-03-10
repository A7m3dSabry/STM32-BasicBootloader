

#ifndef	_BOOTLOADER_H_
#define _BOOTLOADER_H_





/*************************** Section: Includes *********************************/
/*************************** Section: Macro Definitions ************************/
/*************************** Section: Macro Functions **************************/

#define BL_DEBUG_UART								(&huart2)
#define BL_HOST_COMMUNICATION_UART					(&huart1)
#define BL_ENABLE_UART_DEBUG_MESSAGE

#define BL_HOST_BUFFER_SIZE							(200)

#define CRC_BYTE_SIZE								(4)
#define CRC_ENGINE_OBJ								(&hcrc)

/* CBL Commands */
#define CBL_GET_VER_CMD										(0x10)
#define CBL_GET_HELP_CMD									(0x11)
#define CBL_GET_CID_CMD										(0x12)
#define CBL_GET_RDP_STATUS_CMD								(0x13)
#define CBL_GO_TO_ADDR_CMD									(0x14)
#define CBL_FLASH_ERASE_CMD									(0x15)
#define CBL_MEM_WRITE_CMD									(0x16)
#define CBL_EN_R_W_PROTECT_CMD								(0x17)
#define CBL_MEM_READ_CMD									(0x18)
#define CBL_READ_SECTOR_STATUS_CMD						    (0x19)
#define CBL_OTP_READ_CMD									(0x20)
#define CBL_CHANGE_ROP_LEVEL_CMD							(0x21)



/* Version */
#define CBL_VERSION_ID											100
#define CBL_SW_MAJOR_VERSION								1
#define CBL_SW_MINORR_VERSION								0
#define CBL_SW_PATCH_VERSION								0


/* CRC */
#define CRC_OK															1
#define CRC_NOK															0

/* CBL Returns */
#define CBL_SEND_NACK												0xAB
#define CBL_SEND_ACK												0xCD

/* Address Validation */
#define ADDRESS_IS_INVALID									0x00
#define ADDRESS_IS_VALID										0x01
#define STM32F103_SRAM_START								(0x20000000)
#define STM32F103_SRAM_END									(STM32F103_SRAM_START+(20*1024))
#define STM32F103_FLASH_START								(0x08000000)
#define STM32F103_FLASH_END									(STM32F103_FLASH_START+(64*1024))
#define APP_BASE_ADDREESS										0x08008000

/* Flash Erasing */
#define SECTOR_NUMBER_INVALID								0x00
#define SECTOR_NUMBER_VALID									0x01
#define ERASE_UNSUCCESSFUL									0x02
#define ERASE_SUCCESSFUL										0x03
#define PAGE_ERASE_SUCCESS									0xFFFFFFFF /* from FlashEx function */
#define MAX_SECTOR_NUMBER										4
#define PAGES_PER_SECTOR										16
#define PAGE_SIZE														1024
#define ERASE_ALL_COMMAND										0xFF

/* Write Flash */
#define FLASH_WRITE_FAILED									0x00
#define FLASH_WRITE_PASSED									0x01

/* Flash Protection */
#define FLASH_RDP_LEVEL_0										0x00
#define FLASH_RDP_LEVEL_1										0x01
#define ROP_CHANGE_FAILED										0x00
#define ROP_CHANGE_SUCCESSED								0x01



/*************************** Section: Data Types *******************************/
typedef enum
{
    BL_NACK,
    BL_OK
}BL_Status_t;

typedef void(*pFunction)(void) ;

/*************************** Section: Methods Prototypes ***********************/


BL_Status_t BL_UART_Fetch_Host_Command(void);

void BL_Print_Message(char*format,...);

#endif /* _BOOTLOADER_H_ */
