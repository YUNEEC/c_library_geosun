#pragma once
// MESSAGE GS_ACK_VERSION_NUMBER PACKING

#define MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER 200011


typedef struct __mavlink_gs_ack_version_number_t {
 char version_number[16]; /*<  Software version number.*/
} mavlink_gs_ack_version_number_t;

#define MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN 16
#define MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_MIN_LEN 16
#define MAVLINK_MSG_ID_200011_LEN 16
#define MAVLINK_MSG_ID_200011_MIN_LEN 16

#define MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_CRC 46
#define MAVLINK_MSG_ID_200011_CRC 46

#define MAVLINK_MSG_GS_ACK_VERSION_NUMBER_FIELD_VERSION_NUMBER_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GS_ACK_VERSION_NUMBER { \
    200011, \
    "GS_ACK_VERSION_NUMBER", \
    1, \
    {  { "version_number", NULL, MAVLINK_TYPE_CHAR, 16, 0, offsetof(mavlink_gs_ack_version_number_t, version_number) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GS_ACK_VERSION_NUMBER { \
    "GS_ACK_VERSION_NUMBER", \
    1, \
    {  { "version_number", NULL, MAVLINK_TYPE_CHAR, 16, 0, offsetof(mavlink_gs_ack_version_number_t, version_number) }, \
         } \
}
#endif

/**
 * @brief Pack a gs_ack_version_number message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param version_number  Software version number.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gs_ack_version_number_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *version_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN];

    _mav_put_char_array(buf, 0, version_number, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN);
#else
    mavlink_gs_ack_version_number_t packet;

    mav_array_memcpy(packet.version_number, version_number, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_MIN_LEN, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_CRC);
}

/**
 * @brief Pack a gs_ack_version_number message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param version_number  Software version number.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gs_ack_version_number_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *version_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN];

    _mav_put_char_array(buf, 0, version_number, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN);
#else
    mavlink_gs_ack_version_number_t packet;

    mav_array_memcpy(packet.version_number, version_number, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_MIN_LEN, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_CRC);
}

/**
 * @brief Encode a gs_ack_version_number struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gs_ack_version_number C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gs_ack_version_number_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gs_ack_version_number_t* gs_ack_version_number)
{
    return mavlink_msg_gs_ack_version_number_pack(system_id, component_id, msg, gs_ack_version_number->version_number);
}

/**
 * @brief Encode a gs_ack_version_number struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gs_ack_version_number C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gs_ack_version_number_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gs_ack_version_number_t* gs_ack_version_number)
{
    return mavlink_msg_gs_ack_version_number_pack_chan(system_id, component_id, chan, msg, gs_ack_version_number->version_number);
}

/**
 * @brief Send a gs_ack_version_number message
 * @param chan MAVLink channel to send the message
 *
 * @param version_number  Software version number.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gs_ack_version_number_send(mavlink_channel_t chan, const char *version_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN];

    _mav_put_char_array(buf, 0, version_number, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER, buf, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_MIN_LEN, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_CRC);
#else
    mavlink_gs_ack_version_number_t packet;

    mav_array_memcpy(packet.version_number, version_number, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER, (const char *)&packet, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_MIN_LEN, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_CRC);
#endif
}

/**
 * @brief Send a gs_ack_version_number message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gs_ack_version_number_send_struct(mavlink_channel_t chan, const mavlink_gs_ack_version_number_t* gs_ack_version_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gs_ack_version_number_send(chan, gs_ack_version_number->version_number);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER, (const char *)gs_ack_version_number, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_MIN_LEN, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_CRC);
#endif
}

#if MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gs_ack_version_number_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *version_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_char_array(buf, 0, version_number, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER, buf, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_MIN_LEN, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_CRC);
#else
    mavlink_gs_ack_version_number_t *packet = (mavlink_gs_ack_version_number_t *)msgbuf;

    mav_array_memcpy(packet->version_number, version_number, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER, (const char *)packet, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_MIN_LEN, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_CRC);
#endif
}
#endif

#endif

// MESSAGE GS_ACK_VERSION_NUMBER UNPACKING


/**
 * @brief Get field version_number from gs_ack_version_number message
 *
 * @return  Software version number.
 */
static inline uint16_t mavlink_msg_gs_ack_version_number_get_version_number(const mavlink_message_t* msg, char *version_number)
{
    return _MAV_RETURN_char_array(msg, version_number, 16,  0);
}

/**
 * @brief Decode a gs_ack_version_number message into a struct
 *
 * @param msg The message to decode
 * @param gs_ack_version_number C-struct to decode the message contents into
 */
static inline void mavlink_msg_gs_ack_version_number_decode(const mavlink_message_t* msg, mavlink_gs_ack_version_number_t* gs_ack_version_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gs_ack_version_number_get_version_number(msg, gs_ack_version_number->version_number);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN? msg->len : MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN;
        memset(gs_ack_version_number, 0, MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_LEN);
    memcpy(gs_ack_version_number, _MAV_PAYLOAD(msg), len);
#endif
}
