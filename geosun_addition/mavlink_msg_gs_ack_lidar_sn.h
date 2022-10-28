#pragma once
// MESSAGE GS_ACK_LIDAR_SN PACKING

#define MAVLINK_MSG_ID_GS_ACK_LIDAR_SN 200013


typedef struct __mavlink_gs_ack_lidar_sn_t {
 char lidar_SN[12]; /*<  lidar SN.*/
} mavlink_gs_ack_lidar_sn_t;

#define MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN 12
#define MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_MIN_LEN 12
#define MAVLINK_MSG_ID_200013_LEN 12
#define MAVLINK_MSG_ID_200013_MIN_LEN 12

#define MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_CRC 133
#define MAVLINK_MSG_ID_200013_CRC 133

#define MAVLINK_MSG_GS_ACK_LIDAR_SN_FIELD_LIDAR_SN_LEN 12

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GS_ACK_LIDAR_SN { \
    200013, \
    "GS_ACK_LIDAR_SN", \
    1, \
    {  { "lidar_SN", NULL, MAVLINK_TYPE_CHAR, 12, 0, offsetof(mavlink_gs_ack_lidar_sn_t, lidar_SN) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GS_ACK_LIDAR_SN { \
    "GS_ACK_LIDAR_SN", \
    1, \
    {  { "lidar_SN", NULL, MAVLINK_TYPE_CHAR, 12, 0, offsetof(mavlink_gs_ack_lidar_sn_t, lidar_SN) }, \
         } \
}
#endif

/**
 * @brief Pack a gs_ack_lidar_sn message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param lidar_SN  lidar SN.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gs_ack_lidar_sn_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *lidar_SN)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN];

    _mav_put_char_array(buf, 0, lidar_SN, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN);
#else
    mavlink_gs_ack_lidar_sn_t packet;

    mav_array_memcpy(packet.lidar_SN, lidar_SN, sizeof(char)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GS_ACK_LIDAR_SN;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_MIN_LEN, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_CRC);
}

/**
 * @brief Pack a gs_ack_lidar_sn message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param lidar_SN  lidar SN.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gs_ack_lidar_sn_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *lidar_SN)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN];

    _mav_put_char_array(buf, 0, lidar_SN, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN);
#else
    mavlink_gs_ack_lidar_sn_t packet;

    mav_array_memcpy(packet.lidar_SN, lidar_SN, sizeof(char)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GS_ACK_LIDAR_SN;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_MIN_LEN, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_CRC);
}

/**
 * @brief Encode a gs_ack_lidar_sn struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gs_ack_lidar_sn C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gs_ack_lidar_sn_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gs_ack_lidar_sn_t* gs_ack_lidar_sn)
{
    return mavlink_msg_gs_ack_lidar_sn_pack(system_id, component_id, msg, gs_ack_lidar_sn->lidar_SN);
}

/**
 * @brief Encode a gs_ack_lidar_sn struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gs_ack_lidar_sn C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gs_ack_lidar_sn_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gs_ack_lidar_sn_t* gs_ack_lidar_sn)
{
    return mavlink_msg_gs_ack_lidar_sn_pack_chan(system_id, component_id, chan, msg, gs_ack_lidar_sn->lidar_SN);
}

/**
 * @brief Send a gs_ack_lidar_sn message
 * @param chan MAVLink channel to send the message
 *
 * @param lidar_SN  lidar SN.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gs_ack_lidar_sn_send(mavlink_channel_t chan, const char *lidar_SN)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN];

    _mav_put_char_array(buf, 0, lidar_SN, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN, buf, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_MIN_LEN, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_CRC);
#else
    mavlink_gs_ack_lidar_sn_t packet;

    mav_array_memcpy(packet.lidar_SN, lidar_SN, sizeof(char)*12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN, (const char *)&packet, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_MIN_LEN, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_CRC);
#endif
}

/**
 * @brief Send a gs_ack_lidar_sn message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gs_ack_lidar_sn_send_struct(mavlink_channel_t chan, const mavlink_gs_ack_lidar_sn_t* gs_ack_lidar_sn)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gs_ack_lidar_sn_send(chan, gs_ack_lidar_sn->lidar_SN);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN, (const char *)gs_ack_lidar_sn, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_MIN_LEN, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_CRC);
#endif
}

#if MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gs_ack_lidar_sn_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *lidar_SN)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_char_array(buf, 0, lidar_SN, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN, buf, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_MIN_LEN, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_CRC);
#else
    mavlink_gs_ack_lidar_sn_t *packet = (mavlink_gs_ack_lidar_sn_t *)msgbuf;

    mav_array_memcpy(packet->lidar_SN, lidar_SN, sizeof(char)*12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN, (const char *)packet, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_MIN_LEN, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_CRC);
#endif
}
#endif

#endif

// MESSAGE GS_ACK_LIDAR_SN UNPACKING


/**
 * @brief Get field lidar_SN from gs_ack_lidar_sn message
 *
 * @return  lidar SN.
 */
static inline uint16_t mavlink_msg_gs_ack_lidar_sn_get_lidar_SN(const mavlink_message_t* msg, char *lidar_SN)
{
    return _MAV_RETURN_char_array(msg, lidar_SN, 12,  0);
}

/**
 * @brief Decode a gs_ack_lidar_sn message into a struct
 *
 * @param msg The message to decode
 * @param gs_ack_lidar_sn C-struct to decode the message contents into
 */
static inline void mavlink_msg_gs_ack_lidar_sn_decode(const mavlink_message_t* msg, mavlink_gs_ack_lidar_sn_t* gs_ack_lidar_sn)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gs_ack_lidar_sn_get_lidar_SN(msg, gs_ack_lidar_sn->lidar_SN);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN? msg->len : MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN;
        memset(gs_ack_lidar_sn, 0, MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_LEN);
    memcpy(gs_ack_lidar_sn, _MAV_PAYLOAD(msg), len);
#endif
}
