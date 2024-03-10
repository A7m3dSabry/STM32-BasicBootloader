
#ifndef        _BL_PRIVATE_H_
#define        _BL_PRIVATE_H_



/*************************** Section: Includes *********************************/
/*************************** Section: Macro Definitions ************************/
/*************************** Section: Macro Functions **************************/
/*************************** Section: Data Types *******************************/
/*************************** Section: Methods Prototypes ***********************/


static void BL_Send_Data_To_Host(uint8_t *Data_Buffer, uint32_t Data_Len);

static void BL_Send_ACK_NACK(BL_Status_t BL_Message, uint8_t Reply_Len);

static void BL_Get_Version(uint8_t *Hostbuffer);


static void BL_Get_Help(uint8_t *Hostbuffer);


static void BL_Get_Chip_ID(uint8_t *Hostbuffer);


static uint8_t BL_GET_RDP_LEVEL(void);


static void BL_Get_Read_Protection_Level(uint8_t *Hostbuffer);


static uint8_t BL_Host_Jump_Address_Verify(uint32_t Jump_Address);


static void BL_Jump_To_User_App(void);

static void BL_Jump_To_Address(uint8_t *Hostbuffer);

static uint8_t BL_Perform_Flash_Erase(uint8_t Sector_Number, uint8_t Number_Of_Sectors);


static void BL_Erase_Flash(uint8_t *Hostbuffer);


static uint8_t BL_Write_Payload_In_Flash(uint8_t *Host_Payload, uint32_t Start_Address, uint8_t Payload_Len);


static void BL_Memory_Write(uint8_t *Hostbuffer);


static void BL_Enable_RW_Protection(uint8_t *Hostbuffer);


static void BL_Memory_Read(uint8_t *Hostbuffer);


static void BL_Get_Sector_Protection_Status(uint8_t *Hostbuffer);

static void BL_Read_OTP(uint8_t *Hostbuffer);


static uint8_t BL_Change_ROP_Level(uint8_t ROP_Level);


static void BL_Change_Read_Protection_Level(uint8_t *Hostbuffer);


static uint8_t BL_CRC_Verify(uint8_t *pData, uint32_t Data_Len, uint32_t Host_CRC);

#endif
