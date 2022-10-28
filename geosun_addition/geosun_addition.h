/** @file
 *  @brief MAVLink comm protocol generated from geosun_addition.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_GEOSUN_ADDITION_H
#define MAVLINK_GEOSUN_ADDITION_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_GEOSUN_ADDITION.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 2

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{200000, 136, 12, 12, 0, 0, 0}, {200010, 134, 1, 1, 0, 0, 0}, {200011, 46, 16, 16, 0, 0, 0}, {200012, 78, 1, 1, 0, 0, 0}, {200013, 133, 12, 12, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_GEOSUN_ADDITION

// ENUM DEFINITIONS


/** @brief These encode the components whose status is sent as part of the GS_ALL_STATUS message. */
#ifndef HAVE_ENUM_GS_SYS_STATUS_COMP
#define HAVE_ENUM_GS_SYS_STATUS_COMP
typedef enum GS_SYS_STATUS_COMP
{
   GS_SYS_STATUS_COMP_LIDAR=1, /* 0x01 lidar | */
   GS_SYS_STATUS_COMP_CAMERA_COIN=2, /* 0x02 visible light camera coin | */
   GS_SYS_STATUS_COMP_INERTIAL_NAVIGATION=4, /* 0x04 inertial navigation data | */
   GS_SYS_STATUS_COMP_GNSS=8, /* 0x08 GNSS communication | */
   GS_SYS_STATUS_COMP_SD_CARD=16, /* 0x10 SD card | */
   GS_SYS_STATUS_COMP_ENUM_END=17, /*  | */
} GS_SYS_STATUS_COMP;
#endif

/** @brief Geosun satellites state. */
#ifndef HAVE_ENUM_GS_SATELLITES_STATE
#define HAVE_ENUM_GS_SATELLITES_STATE
typedef enum GS_SATELLITES_STATE
{
   GS_SATELLITES_STATE_SEARCHING=0, /* searching | */
   GS_SATELLITES_STATE_LOCKED=1, /* locked | */
   GS_SATELLITES_STATE_ENUM_END=2, /*  | */
} GS_SATELLITES_STATE;
#endif

/** @brief Geosun inertial navigation state. */
#ifndef HAVE_ENUM_GS_IN_STATE
#define HAVE_ENUM_GS_IN_STATE
typedef enum GS_IN_STATE
{
   GS_IN_STATE_STANDING=0, /* standing | */
   GS_IN_STATE_STAND_OVER=1, /* stand over | */
   GS_IN_STATE_ENUM_END=2, /*  | */
} GS_IN_STATE;
#endif

/** @brief Geosun lidar state. */
#ifndef HAVE_ENUM_GS_LIDAR_STATE
#define HAVE_ENUM_GS_LIDAR_STATE
typedef enum GS_LIDAR_STATE
{
   GS_LIDAR_STATE_STANDBY=0, /* on standby | */
   GS_LIDAR_STATE_RECORDING=1, /* recording | */
   GS_LIDAR_STATE_EXCEPTION=2, /* state abnoraml,need to reboot | */
   GS_LIDAR_STATE_ENUM_END=3, /*  | */
} GS_LIDAR_STATE;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_gs_all_status.h"
#include "./mavlink_msg_gs_get_version_number.h"
#include "./mavlink_msg_gs_ack_version_number.h"
#include "./mavlink_msg_gs_get_lidar_sn.h"
#include "./mavlink_msg_gs_ack_lidar_sn.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 2

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_GS_ALL_STATUS, MAVLINK_MESSAGE_INFO_GS_GET_VERSION_NUMBER, MAVLINK_MESSAGE_INFO_GS_ACK_VERSION_NUMBER, MAVLINK_MESSAGE_INFO_GS_GET_LIDAR_SN, MAVLINK_MESSAGE_INFO_GS_ACK_LIDAR_SN}
# define MAVLINK_MESSAGE_NAMES {{ "GS_ACK_LIDAR_SN", 200013 }, { "GS_ACK_VERSION_NUMBER", 200011 }, { "GS_ALL_STATUS", 200000 }, { "GS_GET_LIDAR_SN", 200012 }, { "GS_GET_VERSION_NUMBER", 200010 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_GEOSUN_ADDITION_H
