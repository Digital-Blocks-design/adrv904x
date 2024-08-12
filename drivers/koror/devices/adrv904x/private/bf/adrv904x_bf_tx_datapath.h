/** 
 * \file adrv904x_bf_tx_datapath.h Automatically generated file with generator ver 0.0.16.0.
 * 
 * \brief Contains BitField functions to support ADRV904X transceiver device.
 * 
 * ADRV904X BITFIELD VERSION: 0.0.0.11
 * 
 * Disclaimer Legal Disclaimer
 * 
 * Copyright 2015 - 2021 Analog Devices Inc.
 * 
 * Released under the ADRV904X API license, for more information see the "LICENSE.PDF" file in this zip file.
 */

#ifndef _ADRV904X_BF_TX_DATAPATH_H_
#define _ADRV904X_BF_TX_DATAPATH_H_

#include "adi_adrv904x_core.h"
#include "adi_adrv904x_hal.h"
#include "../../private/bf/adrv904x_bf_tx_datapath_types.h"

#ifndef ADI_API
  #ifdef __cplusplus
    #define ADI_API extern "C"
  #else
    #define ADI_API
  #endif
#endif

ADI_API adi_adrv904x_ErrAction_e adrv904x_TxDatapath_PostAttenHcClipCntStat_BfGet(adi_adrv904x_Device_t* const device,
                                                                                  adi_adrv904x_SpiCache_t* const spiCache,
                                                                                  const adrv904x_BfTxDatapathChanAddr_e baseAddr,
                                                                                  uint16_t* const bfValue);

ADI_API adi_adrv904x_ErrAction_e adrv904x_TxDatapath_PostAttenHcCntClear_BfSet(adi_adrv904x_Device_t* const device,
                                                                               adi_adrv904x_SpiCache_t* const spiCache,
                                                                               const adrv904x_BfTxDatapathChanAddr_e baseAddr,
                                                                               const uint8_t bfValue);

ADI_API adi_adrv904x_ErrAction_e adrv904x_TxDatapath_PostAttenHcCntUpd_BfSet(adi_adrv904x_Device_t* const device,
                                                                             adi_adrv904x_SpiCache_t* const spiCache,
                                                                             const adrv904x_BfTxDatapathChanAddr_e baseAddr,
                                                                             const uint8_t bfValue);

ADI_API adi_adrv904x_ErrAction_e adrv904x_TxDatapath_PostAttenHcEn_BfSet(adi_adrv904x_Device_t* const device,
                                                                         adi_adrv904x_SpiCache_t* const spiCache,
                                                                         const adrv904x_BfTxDatapathChanAddr_e baseAddr,
                                                                         const uint8_t bfValue);

ADI_API adi_adrv904x_ErrAction_e adrv904x_TxDatapath_PostAttenHcEn_BfGet(adi_adrv904x_Device_t* const device,
                                                                         adi_adrv904x_SpiCache_t* const spiCache,
                                                                         const adrv904x_BfTxDatapathChanAddr_e baseAddr,
                                                                         uint8_t* const bfValue);

ADI_API adi_adrv904x_ErrAction_e adrv904x_TxDatapath_PostAttenHcThreshold_BfSet(adi_adrv904x_Device_t* const device,
                                                                                adi_adrv904x_SpiCache_t* const spiCache,
                                                                                const adrv904x_BfTxDatapathChanAddr_e baseAddr,
                                                                                const uint32_t bfValue);

ADI_API adi_adrv904x_ErrAction_e adrv904x_TxDatapath_PostAttenHcThreshold_BfGet(adi_adrv904x_Device_t* const device,
                                                                                adi_adrv904x_SpiCache_t* const spiCache,
                                                                                const adrv904x_BfTxDatapathChanAddr_e baseAddr,
                                                                                uint32_t* const bfValue);

#endif // _ADRV904X_BF_TX_DATAPATH_H_

