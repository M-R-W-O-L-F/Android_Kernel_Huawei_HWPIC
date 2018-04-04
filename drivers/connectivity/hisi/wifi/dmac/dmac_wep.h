/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : dmac_wep.h
  版 本 号   : 初稿
  作    者   : t00231215
  生成日期   : 2013年7月24日
  最近修改   :
  功能描述   : dmac_wep.c 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2013年7月24日
    作    者   : t00231215
    修改内容   : 创建文件

******************************************************************************/

#ifndef __DMAC_WEP_H__
#define __DMAC_WEP_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "oal_ext_if.h"
#include "mac_vap.h"

#undef  THIS_FILE_ID
#define THIS_FILE_ID OAM_FILE_ID_DMAC_WEP_H
/*****************************************************************************
  2 宏定义
*****************************************************************************/


/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
//extern oal_void  dmac_wep_add_entry(mac_vap_stru *pst_mac_vap, oal_uint8 uc_lut_idx, oal_uint8 uc_keyid,oal_uint8 *puc_addr);
//extern oal_uint32  dmac_config_wep_add_key(mac_vap_stru *pst_mac_vap, oal_uint8 uc_key_index);
oal_uint32  dmac_config_wep_remove_key(mac_vap_stru *pst_mac_vap, oal_uint8 uc_len, oal_uint8 *puc_param);
oal_uint32  dmac_config_wep_add_entry(mac_vap_stru *pst_mac_vap, oal_uint8 uc_len, oal_uint8 *puc_param);
oal_void  dmac_wep_remove_key(mac_vap_stru *pst_mac_vap, oal_uint8 uc_key_id);

//extern oal_void  dmac_wep_init(mac_vap_stru *pst_mac_vap);
//extern oal_void  dmac_wep_init_key(mac_vap_stru *pst_mac_vap, oal_uint8 uc_idx, oal_uint8 *puc_key, oal_uint8 uc_size);











#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of dmac_wep.h */
