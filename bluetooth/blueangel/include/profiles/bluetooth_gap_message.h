/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 *
 * MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
/*******************************************************************************
 *
 * Filename:
 * ---------
 * Bt_gap_message.h
 *
 * Project:
 * --------
 *   BT Project
 *
 * Description:
 * ------------
 *   This file is used to
 *
 * Author:
 * -------
 * Dlight Ting
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision: 
 * $Modtime:
 * $Log: 
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef __BT_GAP_MESSAGE_H__
#define __BT_GAP_MESSAGE_H__

#ifdef SOURCE_INSIGHT_TRACE
typedef enum 
{
#endif

#ifdef BTMTK_ON_WISE    
    MSG_ID_BT_POWERON_REQ,
    MSG_ID_BT_GAP_GROUP_START = MSG_ID_BT_POWERON_REQ,
#else
    MSG_ID_BT_POWERON_REQ = MSG_ID_BT_GAP_GROUP_START,
#endif /* BTMTK_ON_WISE */                   
    MSG_ID_BT_POWEROFF_REQ,
    MSG_ID_BT_RESET_REQ_IND,
#ifdef BTMTK_ON_WISE 
    MSG_ID_BT_RESTART_REQ,
    MSG_ID_BT_ENGINEER_MODE_POWERON_REQ,
    MSG_ID_BT_ENGINEER_MODE_POWERON_CNF,    
    MSG_ID_BT_MMI_RESET_REQ,
    MSG_ID_BT_MMI_RESET_CNF,
    MSG_ID_BT_L4C_RESET_REQ,
    MSG_ID_BT_L4C_RESET_CNF,   
    MSG_ID_BT_SET_BD_ADDR_REQ,
    MSG_ID_BT_GET_BD_ADDR_REQ,
    MSG_ID_BT_GET_BD_ADDR_CNF,
    MSG_ID_BT_GAP_TEST_CMD_REQ,
#endif  /* BTMTK_ON_WISE */       
    MSG_ID_BT_BM_DISCOVERY_REQ,
    MSG_ID_BT_BM_DISCOVERY_CANCEL_REQ,
    MSG_ID_BT_BM_WRITE_LOCAL_NAME_REQ,
    MSG_ID_BT_BM_READ_LOCAL_NAME_REQ,
    MSG_ID_BT_BM_READ_REMOTE_NAME_REQ,
    MSG_ID_BT_BM_READ_REMOTE_NAME_CANCEL_REQ,
    MSG_ID_BT_BM_WRITE_SCANENABLE_MODE_REQ,
    MSG_ID_BT_BM_READ_SCANENABLE_MODE_REQ,
    MSG_ID_BT_BM_READ_LOCAL_ADDR_REQ,
    MSG_ID_BT_BM_READ_LOCAL_COD_REQ,
    MSG_ID_BT_BM_WRITE_LOCAL_COD_REQ,
    MSG_ID_BT_BM_READ_LOCAL_UUID_REQ,
    MSG_ID_BT_BM_READ_PROPERTY_REQ,
    MSG_ID_BT_BM_WRITE_AUTHENTICATION_MODE_REQ,
    MSG_ID_BT_BM_PIN_CODE_RSP,
    MSG_ID_BT_BM_SECURITY_USER_CONFIRM_RSP,
    MSG_ID_BT_BM_SECURITY_PASSKEY_ENTRY_RSP,
    MSG_ID_BT_BM_SECURITY_PASSKEY_NOTIFY_RSP,
    MSG_ID_BT_BM_SECURITY_KEYPRESS_NOTIFY_RSP,
    MSG_ID_BT_BM_SECURITY_KEYPRESS_NOTIFY_CANCEL_REQ,   
    MSG_ID_BT_BM_SECURITY_OOB_DATA_RSP,
    MSG_ID_BT_BM_BLOCK_ACTIVE_LINK_REQ,    
    MSG_ID_BT_BM_BLOCK_LIST_UPDATE_REQ,
    MSG_ID_BT_BM_BONDING_REQ,
    MSG_ID_BT_BM_DELETE_TRUST_REQ,
    MSG_ID_BT_BM_DELETE_TRUST_ALL_REQ,
    MSG_ID_BT_BM_BONDING_CANCEL_REQ,
    MSG_ID_BT_BM_PAIRING_CANCEL_REQ,
    MSG_ID_BT_BM_SAVE_SETTING_REQ,
    MSG_ID_BT_BM_RESTORE_SETTING_REQ,
    MSG_ID_BT_BM_SERVICE_SEARCH_REQ,
    MSG_ID_BT_BM_SERVICE_SEARCH_CANCEL_REQ,
    MSG_ID_BT_BM_SEARCH_ATTRIBUTE_REQ,
    MSG_ID_BT_BM_SEARCH_RAW_REQ,
    MSG_ID_BT_BM_LINK_ALLOW_REQ,
    MSG_ID_BT_BM_LINK_DISALLOW_REQ,
    MSG_ID_BT_BM_LINK_CONNECT_ACCEPT_NOT_AUTO_REQ,
    MSG_ID_BT_BM_LINK_CONNECT_ACCEPT_RSP,    
    MSG_ID_BT_BM_GET_LINK_STATE_REQ,
    MSG_ID_BT_BM_SET_LINK_STATE_REQ,   
    MSG_ID_BT_BM_GET_SCATTERNET_STATE_REQ,
    MSG_ID_BT_READ_RSSI_REQ,

    MSG_ID_BT_POWERON_CNF,
    MSG_ID_BT_POWEROFF_CNF,
    MSG_ID_BT_BM_DISCOVERY_RESULT_IND,
    MSG_ID_BT_BM_DISCOVERY_UPDATE_IND,
    MSG_ID_BT_BM_DISCOVERY_CNF,
    MSG_ID_BT_BM_DISCOVERY_CANCEL_CNF,
    MSG_ID_BT_BM_WRITE_LOCAL_NAME_CNF,
    MSG_ID_BT_BM_READ_LOCAL_NAME_CNF,
    MSG_ID_BT_BM_READ_REMOTE_NAME_CNF,
    MSG_ID_BT_BM_READ_REMOTE_NAME_CANCEL_CNF,
    MSG_ID_BT_BM_WRITE_SCANENABLE_MODE_CNF,
    MSG_ID_BT_BM_READ_SCANENABLE_MODE_CNF,
    MSG_ID_BT_BM_READ_LOCAL_ADDR_CNF,
    MSG_ID_BT_BM_READ_LOCAL_COD_CNF,
    MSG_ID_BT_BM_WRITE_LOCAL_COD_CNF,
    MSG_ID_BT_BM_READ_LOCAL_UUID_CNF,
    MSG_ID_BT_BM_READ_PROPERTY_CNF,
    MSG_ID_BT_BM_WRITE_AUTHENTICATION_MODE_CNF,
    MSG_ID_BT_BM_PIN_CODE_IND,
    MSG_ID_BT_BM_SECURITY_USER_CONFIRM_IND,
    MSG_ID_BT_BM_SECURITY_PASSKEY_ENTRY_IND,
    MSG_ID_BT_BM_SECURITY_PASSKEY_NOTIFY_IND,
    MSG_ID_BT_BM_SECURITY_KEYPRESS_NOTIFY_IND,
    MSG_ID_BT_BM_SECURITY_OOB_DATA_IND,
    MSG_ID_BT_BM_BLOCK_ACTIVE_LINK_CNF,
    MSG_ID_BT_BM_BLOCK_LIST_UPDATE_CNF,
    MSG_ID_BT_BM_BONDING_CNF,
    MSG_ID_BT_BM_BONDING_RESULT_IND,
    MSG_ID_BT_BM_DELETE_TRUST_CNF,
    MSG_ID_BT_BM_DELETE_TRUST_ALL_CNF,
    MSG_ID_BT_BM_BONDING_CANCEL_CNF,
    MSG_ID_BT_BM_PAIRING_CANCEL_CNF,
    MSG_ID_BT_BM_SAVE_SETTING_CNF,
    MSG_ID_BT_BM_RESTORE_SETTING_CNF,
    MSG_ID_BT_BM_SERVICE_SEARCH_RESULT_IND,
    MSG_ID_BT_BM_SERVICE_SEARCH_CNF,
    MSG_ID_BT_BM_SERVICE_SEARCH_CANCEL_CNF,
    MSG_ID_BT_BM_SEARCH_ATTRIBUTE_RESULT_IND,
    MSG_ID_BT_BM_SEARCH_ATTRIBUTE_CNF,
    MSG_ID_BT_BM_SEARCH_RAW_RESULT,    
    MSG_ID_BT_BM_SEARCH_RAW_CNF,
    MSG_ID_BT_BM_LINK_STATE_IND,
    MSG_ID_BT_BM_LINK_ALLOW_CNF,
    MSG_ID_BT_BM_LINK_DISALLOW_CNF,    
    MSG_ID_BT_BM_LINK_CONNECT_ACCEPT_IND,    
    MSG_ID_BT_BM_GET_LINK_STATE_CNF,   
    MSG_ID_BT_BM_SET_LINK_STATE_CNF,
    MSG_ID_BT_BM_GET_SCATTERNET_STATE_CNF,
    MSG_ID_BT_READ_RSSI_CNF,
    MSG_ID_BT_BM_REMOTE_NAME_IND,
    MSG_ID_BT_BM_GET_LINK_KEY_REQ,
    MSG_ID_BT_BM_GET_LINK_KEY_CNF,
    MSG_ID_BT_GAP_GROUP_END = MSG_ID_BT_BM_GET_LINK_KEY_CNF,

#ifdef SOURCE_INSIGHT_TRACE
}GAP_MSG_TYPE;
#endif

#endif
