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
 * Bt_ftps_message.h
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
 * Daylong
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
#ifndef __BT_FTPS_MESSAGE_H__
#define __BT_FTPS_MESSAGE_H__

#ifdef SOURCE_INSIGHT_TRACE
enum 
{
#endif
#ifdef BTMTK_ON_WISE    
    MSG_ID_BT_FTPS_REGISTER_SERVER_REQ,
    MSG_ID_BT_FTPS_GROUP_START = MSG_ID_BT_FTPS_REGISTER_SERVER_REQ,
#else
    MSG_ID_BT_FTPS_REGISTER_SERVER_REQ = MSG_ID_BT_FTPS_GROUP_START,
#endif /* BTMTK_ON_WISE */                           
	MSG_ID_BT_FTPS_REGISTER_SERVER_CNF,
	MSG_ID_BT_FTPS_DEREGISTER_SERVER_REQ,
	MSG_ID_BT_FTPS_DEREGISTER_SERVER_CNF,
	MSG_ID_BT_FTPS_CONNECT_IND,
	MSG_ID_BT_FTPS_CONNECT_RSP,
	MSG_ID_BT_FTPS_PUSH_IND,
	MSG_ID_BT_FTPS_PUSH_RSP,
	MSG_ID_BT_FTPS_PULL_IND,
	MSG_ID_BT_FTPS_PULL_RSP,
	MSG_ID_BT_FTPS_SET_FOLDER_IND,
	MSG_ID_BT_FTPS_SET_FOLDER_RSP,
	MSG_ID_BT_FTPS_ABORT_IND,
	MSG_ID_BT_FTPS_ABORT_RSP,
	MSG_ID_BT_FTPS_AUTH_REQ,
	MSG_ID_BT_FTPS_AUTH_CNF,
	MSG_ID_BT_FTPS_AUTH_IND,
	MSG_ID_BT_FTPS_AUTH_RSP,
	MSG_ID_BT_FTPS_DISCONNECT_IND,
	MSG_ID_BT_FTPS_DISCONNECT_RSP,
	MSG_ID_BT_FTPS_TPDISCONNECT_REQ,
	MSG_ID_BT_FTPS_TPDISCONNECT_IND,
	MSG_ID_BT_FTPS_AUTHORIZE_IND,
	MSG_ID_BT_FTPS_AUTHORIZE_RSP, 
	MSG_ID_BT_FTPS_SERVER_INTERNAL_RW,
	MSG_ID_BT_FTPS_ACTION_IND,
	MSG_ID_BT_FTPS_ACTION_RSP,
	MSG_ID_BT_FTPS_PUSHFILE_IND,
	MSG_ID_BT_FTPS_PUSHFILE_RSP,
	MSG_ID_BT_FTPS_PUSHFILE_RSP_IND,
	MSG_ID_BT_FTPS_PULLFILE_IND,
	MSG_ID_BT_FTPS_PULLFILE_RSP,
	MSG_ID_BT_FTPS_PULLFILE_RSP_IND,	
	MSG_ID_BT_FTPS_ABORTFILE_REQ,
	MSG_ID_BT_FTPS_ABORTFILE_CNF,
	MSG_ID_BT_FTPS_FILE_PROGRESS_IND,
	MSG_ID_BT_FTPS_GROUP_END = MSG_ID_BT_FTPS_FILE_PROGRESS_IND,


#ifdef SOURCE_INSIGHT_TRACE
};
#endif

#endif

