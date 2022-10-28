#pragma once
// MESSAGE GS_GET_LIDAR_SN PACKING

#define MAVLINK_MSG_ID_GS_GET_LIDAR_SN 200012


typedef struct __mavlink_gs_get_lidar_sn_t {
 uint8_t reserved; /*<  Reserved.*/
} mavlink_gs_get_lidar_sn_t;

#define MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN 1
#define MAVLINK_MSG_ID_GS_GET_LIDAR_SN_MIN_LEN 1
#define MAVLINK_MSG_ID_200012_LEN 1
#define MAVLINK_MSG_ID_200012_MIN_LEN 1

#define MAVLINK_MSG_ID_GS_GET_LIDAR_SN_CRC 78
#define MAVLINK_MSG_ID_200012_CRC 78



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GS_GET_LIDAR_SN { \
    200012, \
    "GS_GET_LIDAR_SN", \
    1, \
    {  { "reserved", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_gs_get_lidar_sn_t, reserved) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GS_GET_LIDAR_SN { \
    "GS_GET_LIDAR_SN", \
    1, \
    {  { "reserved", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_gs_get_lidar_sn_t, reserved) }, \
         } \
}
#endif

/**
 * @brief Pack a gs_get_lidar_sn message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param reserved  Reserved.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gs_get_lidar_sn_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN];
    _mav_put_uint8_t(buf, 0, reserved);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN);
#else
    mavlink_gs_get_lidar_sn_t packet;
    packet.reserved = reserved;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GS_GET_LIDAR_SN;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_MIN_LEN, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_CRC);
}

/**
 * @brief Pack a gs_get_lidar_sn message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param reserved  Reserved.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gs_get_lidar_sn_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN];
    _mav_put_uint8_t(buf, 0, reserved);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN);
#else
    mavlink_gs_get_lidar_sn_t packet;
    packet.reserved = reserved;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GS_GET_LIDAR_SN;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_MIN_LEN, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_CRC);
}

/**
 * @brief Encode a gs_get_lidar_sn struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gs_get_lidar_sn C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gs_get_lidar_sn_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gs_get_lidar_sn_t* gs_get_lidar_sn)
{
    return mavlink_msg_gs_get_lidar_sn_pack(system_id, component_id, msg, gs_get_lidar_sn->reserved);
}

/**
 * @brief Encode a gs_get_lidar_sn struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gs_get_lidar_sn C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gs_get_lidar_sn_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gs_get_lidar_sn_t* gs_get_lidar_sn)
{
    return mavlink_msg_gs_get_lidar_sn_pack_chan(system_id, component_id, chan, msg, gs_get_lidar_sn->reserved);
}

/**
 * @brief Send a gs_get_lidar_sn message
 * @param chan MAVLink channel to send the message
 *
 * @param reserved  Reserved.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gs_get_lidar_sn_send(mavlink_channel_t chan, uint8_t reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN];
    _mav_put_uint8_t(buf, 0, reserved);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_GET_LIDAR_SN, buf, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_MIN_LEN, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_CRC);
#else
    mavlink_gs_get_lidar_sn_t packet;
    packet.reserved = reserved;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_GET_LIDAR_SN, (const char *)&packet, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_MIN_LEN, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_CRC);
#endif
}

/**
 * @brief Send a gs_get_lidar_sn message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gs_get_lidar_sn_send_struct(mavlink_channel_t chan, const mavlink_gs_get_lidar_sn_t* gs_get_lidar_sn)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gs_get_lidar_sn_send(chan, gs_get_lidar_sn->reserved);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_GET_LIDAR_SN, (const char *)gs_get_lidar_sn, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_MIN_LEN, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_CRC);
#endif
}

#if MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gs_get_lidar_sn_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, reserved);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_GET_LIDAR_SN, buf, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_MIN_LEN, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_CRC);
#else
    mavlink_gs_get_lidar_sn_t *packet = (mavlink_gs_get_lidar_sn_t *)msgbuf;
    packet->reserved = reserved;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_GET_LIDAR_SN, (const char *)packet, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_MIN_LEN, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_CRC);
#endif
}
#endif

#endif

// MESSAGE GS_GET_LIDAR_SN UNPACKING


/**
 * @brief Get field reserved from gs_get_lidar_sn message
 *
 * @return  Reserved.
 */
static inline uint8_t mavlink_msg_gs_get_lidar_sn_get_reserved(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a gs_get_lidar_sn message into a struct
 *
 * @param msg The message to decode
 * @param gs_get_lidar_sn C-struct to decode the message contents into
 */
static inline void mavlink_msg_gs_get_lidar_sn_decode(const mavlink_message_t* msg, mavlink_gs_get_lidar_sn_t* gs_get_lidar_sn)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gs_get_lidar_sn->reserved = mavlink_msg_gs_get_lidar_sn_get_reserved(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN? msg->len : MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN;
        memset(gs_get_lidar_sn, 0, MAVLINK_MSG_ID_GS_GET_LIDAR_SN_LEN);
    memcpy(gs_get_lidar_sn, _MAV_PAYLOAD(msg), len);
#endif
}
