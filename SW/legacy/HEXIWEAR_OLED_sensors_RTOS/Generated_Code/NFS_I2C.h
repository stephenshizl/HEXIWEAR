/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : NFS_I2C.h
**     Project     : HEXIWEAR_OLED_sensors_RTOS
**     Processor   : MK64FN1M0VDC12
**     Component   : fsl_i2c
**     Version     : Component 1.2.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.2.0
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-03-04, 12:30, # CodeGen: 0
**     Contents    :
**         I2C_DRV_IRQHandler                - void I2C_DRV_IRQHandler(uint32_t instance);
**         I2C_DRV_MasterInit                - i2c_status_t I2C_DRV_MasterInit(uint32_t instance,i2c_master_state_t * master);
**         I2C_DRV_MasterDeinit              - i2c_status_t I2C_DRV_MasterDeinit(uint32_t instance);
**         I2C_DRV_MasterSetBaudRate         - void I2C_DRV_MasterSetBaudRate(uint32_t instance,const i2c_device_t * device);
**         I2C_DRV_MasterSendDataBlocking    - i2c_status_t I2C_DRV_MasterSendDataBlocking(uint32_t instance,const...
**         I2C_DRV_MasterSendData            - i2c_status_t I2C_DRV_MasterSendData(uint32_t instance,const i2c_device_t *...
**         I2C_DRV_MasterGetSendStatus       - i2c_status_t I2C_DRV_MasterGetSendStatus(uint32_t instance,uint32_t *...
**         I2C_DRV_MasterAbortSendData       - i2c_status_t I2C_DRV_MasterAbortSendData(uint32_t instance);
**         I2C_DRV_MasterReceiveDataBlocking - i2c_status_t I2C_DRV_MasterReceiveDataBlocking(uint32_t instance,const...
**         I2C_DRV_MasterReceiveData         - i2c_status_t I2C_DRV_MasterReceiveData(uint32_t instance,const i2c_device_t *...
**         I2C_DRV_MasterGetReceiveStatus    - i2c_status_t I2C_DRV_MasterGetReceiveStatus(uint32_t instance,uint32_t *...
**         I2C_DRV_MasterReceiveDataPolling  - static inline i2c_status_t I2C_DRV_MasterReceiveDataPolling(uint32_t...
**         I2C_DRV_MasterSendDataPolling     - static inline i2c_status_t I2C_DRV_MasterSendDataPolling(uint32_t...
**         I2C_DRV_MasterIRQHandler          - void I2C_DRV_MasterIRQHandler(uint32_t instance);
**         I2C_DRV_SlaveInit                 - i2c_status_t I2C_DRV_SlaveInit(uint32_t instance,const...
**         I2C_DRV_SlaveDeinit               - i2c_status_t I2C_DRV_SlaveDeinit(uint32_t instance);
**         I2C_DRV_SlaveGetHandler           - i2c_slave_state_t* I2C_DRV_SlaveGetHandler(uint32_t instance);
**         I2C_DRV_SlaveSendData             - i2c_status_t I2C_DRV_SlaveSendData(uint32_t instance,const uint8_t *...
**         I2C_DRV_SlaveSendDataBlocking     - i2c_status_t I2C_DRV_SlaveSendDataBlocking(uint32_t instance,const uint8_t *...
**         I2C_DRV_SlaveReceiveData          - i2c_status_t I2C_DRV_SlaveReceiveData(uint32_t instance,uint8_t *...
**         I2C_DRV_SlaveReceiveDataBlocking  - i2c_status_t I2C_DRV_SlaveReceiveDataBlocking(uint32_t instance,uint8_t *...
**         I2C_DRV_SlaveGetReceiveStatus     - i2c_status_t I2C_DRV_SlaveGetReceiveStatus(uint32_t instance,uint32_t *...
**         I2C_DRV_SlaveGetTransmitStatus    - i2c_status_t I2C_DRV_SlaveGetTransmitStatus(uint32_t instance,uint32_t *...
**         I2C_DRV_SlaveAbortReceiveData     - i2c_status_t I2C_DRV_SlaveAbortReceiveData(uint32_t instance,uint32_t * rxSize);
**         I2C_DRV_SlaveAbortSendData        - i2c_status_t I2C_DRV_SlaveAbortSendData(uint32_t instance,uint32_t * txSize);
**         I2C_DRV_SlaveIsBusBusy            - static inline bool I2C_DRV_SlaveIsBusBusy(uint32_t instance);
**         I2C_DRV_SlaveSendDataPolling      - static inline i2c_status_t I2C_DRV_SlaveSendDataPolling(uint32_t...
**         I2C_DRV_SlaveReceiveDataPolling   - static inline i2c_status_t I2C_DRV_SlaveReceiveDataPolling(uint32_t...
**         I2C_DRV_SlaveIRQHandler           - void I2C_DRV_SlaveIRQHandler(uint32_t instance);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file NFS_I2C.h
** @version 01.00
*/         
/*!
**  @addtogroup NFS_I2C_module NFS_I2C module documentation
**  @{
*/         
#ifndef __NFS_I2C_H
#define __NFS_I2C_H
/* MODULE NFS_I2C. */

/* Include inherited beans */
#include "CLK_manager.h"
#include "HEXI_OS.h"
#include "Cpu.h"

/*! @brief Device instance number */
#define FSL_NFS_I2C 0

/*! @brief Driver state structure which holds driver runtime data */
extern i2c_master_state_t NFS_I2C_MasterState;
    
/*! @brief Master configuration declaration */
extern const i2c_device_t NFS_I2C_MasterConfig;
    
#endif
/* ifndef __NFS_I2C_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
