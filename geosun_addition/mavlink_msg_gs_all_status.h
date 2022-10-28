#pragma once
// MESSAGE GS_ALL_STATUS PACKING

#define MAVLINK_MSG_ID_GS_ALL_STATUS 200000


typedef struct __mavlink_gs_all_status_t {
 uint16_t sd_card_free_capacity; /*<  Showing the free capacity in SD card.(unit:10MB).*/
 uint16_t sd_card_total_capacity; /*<  Showing the total capacity in SD card.(unit:10MB).*/
 uint16_t recorded_size; /*<  Showing the file size has been generated in current record.(unit:10MB).*/
 uint16_t photo_count; /*<  Showing the count of photos has been taken in current record.*/
 uint8_t components_health; /*<  Bitmap showing health of components in system. Value of 0: not health. Value of 1: health.*/
 int8_t satellites_lock_state; /*<  Showing whether the satellites has been locked.*/
 int8_t inertial_navigation_standing_state; /*<  Showing whether the inertial navigation has been standed over.*/
 int8_t lidar_work_state; /*<  Showing the work state of lidar.*/
} mavlink_gs_all_status_t;

#define MAVLINK_MSG_ID_GS_ALL_STATUS_LEN 12
#define MAVLINK_MSG_ID_GS_ALL_STATUS_MIN_LEN 12
#define MAVLINK_MSG_ID_200000_LEN 12
#define MAVLINK_MSG_ID_200000_MIN_LEN 12

#define MAVLINK_MSG_ID_GS_ALL_STATUS_CRC 136
#define MAVLINK_MSG_ID_200000_CRC 136



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GS_ALL_STATUS { \
    200000, \
    "GS_ALL_STATUS", \
    8, \
    {  { "components_health", "0x%01x", MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_gs_all_status_t, components_health) }, \
         { "satellites_lock_state", NULL, MAVLINK_TYPE_INT8_T, 0, 9, offsetof(mavlink_gs_all_status_t, satellites_lock_state) }, \
         { "inertial_navigation_standing_state", NULL, MAVLINK_TYPE_INT8_T, 0, 10, offsetof(mavlink_gs_all_status_t, inertial_navigation_standing_state) }, \
         { "lidar_work_state", NULL, MAVLINK_TYPE_INT8_T, 0, 11, offsetof(mavlink_gs_all_status_t, lidar_work_state) }, \
         { "sd_card_free_capacity", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_gs_all_status_t, sd_card_free_capacity) }, \
         { "sd_card_total_capacity", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_gs_all_status_t, sd_card_total_capacity) }, \
         { "recorded_size", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_gs_all_status_t, recorded_size) }, \
         { "photo_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_gs_all_status_t, photo_count) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GS_ALL_STATUS { \
    "GS_ALL_STATUS", \
    8, \
    {  { "components_health", "0x%01x", MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_gs_all_status_t, components_health) }, \
         { "satellites_lock_state", NULL, MAVLINK_TYPE_INT8_T, 0, 9, offsetof(mavlink_gs_all_status_t, satellites_lock_state) }, \
         { "inertial_navigation_standing_state", NULL, MAVLINK_TYPE_INT8_T, 0, 10, offsetof(mavlink_gs_all_status_t, inertial_navigation_standing_state) }, \
         { "lidar_work_state", NULL, MAVLINK_TYPE_INT8_T, 0, 11, offsetof(mavlink_gs_all_status_t, lidar_work_state) }, \
         { "sd_card_free_capacity", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_gs_all_status_t, sd_card_free_capacity) }, \
         { "sd_card_total_capacity", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_gs_all_status_t, sd_card_total_capacity) }, \
         { "recorded_size", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_gs_all_status_t, recorded_size) }, \
         { "photo_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_gs_all_status_t, photo_count) }, \
         } \
}
#endif

/**
 * @brief Pack a gs_all_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param components_health  Bitmap showing health of components in system. Value of 0: not health. Value of 1: health.
 * @param satellites_lock_state  Showing whether the satellites has been locked.
 * @param inertial_navigation_standing_state  Showing whether the inertial navigation has been standed over.
 * @param lidar_work_state  Showing the work state of lidar.
 * @param sd_card_free_capacity  Showing the free capacity in SD card.(unit:10MB).
 * @param sd_card_total_capacity  Showing the total capacity in SD card.(unit:10MB).
 * @param recorded_size  Showing the file size has been generated in current record.(unit:10MB).
 * @param photo_count  Showing the count of photos has been taken in current record.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gs_all_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t components_health, int8_t satellites_lock_state, int8_t inertial_navigation_standing_state, int8_t lidar_work_state, uint16_t sd_card_free_capacity, uint16_t sd_card_total_capacity, uint16_t recorded_size, uint16_t photo_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GS_ALL_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, sd_card_free_capacity);
    _mav_put_uint16_t(buf, 2, sd_card_total_capacity);
    _mav_put_uint16_t(buf, 4, recorded_size);
    _mav_put_uint16_t(buf, 6, photo_count);
    _mav_put_uint8_t(buf, 8, components_health);
    _mav_put_int8_t(buf, 9, satellites_lock_state);
    _mav_put_int8_t(buf, 10, inertial_navigation_standing_state);
    _mav_put_int8_t(buf, 11, lidar_work_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GS_ALL_STATUS_LEN);
#else
    mavlink_gs_all_status_t packet;
    packet.sd_card_free_capacity = sd_card_free_capacity;
    packet.sd_card_total_capacity = sd_card_total_capacity;
    packet.recorded_size = recorded_size;
    packet.photo_count = photo_count;
    packet.components_health = components_health;
    packet.satellites_lock_state = satellites_lock_state;
    packet.inertial_navigation_standing_state = inertial_navigation_standing_state;
    packet.lidar_work_state = lidar_work_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GS_ALL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GS_ALL_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GS_ALL_STATUS_MIN_LEN, MAVLINK_MSG_ID_GS_ALL_STATUS_LEN, MAVLINK_MSG_ID_GS_ALL_STATUS_CRC);
}

/**
 * @brief Pack a gs_all_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param components_health  Bitmap showing health of components in system. Value of 0: not health. Value of 1: health.
 * @param satellites_lock_state  Showing whether the satellites has been locked.
 * @param inertial_navigation_standing_state  Showing whether the inertial navigation has been standed over.
 * @param lidar_work_state  Showing the work state of lidar.
 * @param sd_card_free_capacity  Showing the free capacity in SD card.(unit:10MB).
 * @param sd_card_total_capacity  Showing the total capacity in SD card.(unit:10MB).
 * @param recorded_size  Showing the file size has been generated in current record.(unit:10MB).
 * @param photo_count  Showing the count of photos has been taken in current record.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gs_all_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t components_health,int8_t satellites_lock_state,int8_t inertial_navigation_standing_state,int8_t lidar_work_state,uint16_t sd_card_free_capacity,uint16_t sd_card_total_capacity,uint16_t recorded_size,uint16_t photo_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GS_ALL_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, sd_card_free_capacity);
    _mav_put_uint16_t(buf, 2, sd_card_total_capacity);
    _mav_put_uint16_t(buf, 4, recorded_size);
    _mav_put_uint16_t(buf, 6, photo_count);
    _mav_put_uint8_t(buf, 8, components_health);
    _mav_put_int8_t(buf, 9, satellites_lock_state);
    _mav_put_int8_t(buf, 10, inertial_navigation_standing_state);
    _mav_put_int8_t(buf, 11, lidar_work_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GS_ALL_STATUS_LEN);
#else
    mavlink_gs_all_status_t packet;
    packet.sd_card_free_capacity = sd_card_free_capacity;
    packet.sd_card_total_capacity = sd_card_total_capacity;
    packet.recorded_size = recorded_size;
    packet.photo_count = photo_count;
    packet.components_health = components_health;
    packet.satellites_lock_state = satellites_lock_state;
    packet.inertial_navigation_standing_state = inertial_navigation_standing_state;
    packet.lidar_work_state = lidar_work_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GS_ALL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GS_ALL_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GS_ALL_STATUS_MIN_LEN, MAVLINK_MSG_ID_GS_ALL_STATUS_LEN, MAVLINK_MSG_ID_GS_ALL_STATUS_CRC);
}

/**
 * @brief Encode a gs_all_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gs_all_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gs_all_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gs_all_status_t* gs_all_status)
{
    return mavlink_msg_gs_all_status_pack(system_id, component_id, msg, gs_all_status->components_health, gs_all_status->satellites_lock_state, gs_all_status->inertial_navigation_standing_state, gs_all_status->lidar_work_state, gs_all_status->sd_card_free_capacity, gs_all_status->sd_card_total_capacity, gs_all_status->recorded_size, gs_all_status->photo_count);
}

/**
 * @brief Encode a gs_all_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gs_all_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gs_all_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gs_all_status_t* gs_all_status)
{
    return mavlink_msg_gs_all_status_pack_chan(system_id, component_id, chan, msg, gs_all_status->components_health, gs_all_status->satellites_lock_state, gs_all_status->inertial_navigation_standing_state, gs_all_status->lidar_work_state, gs_all_status->sd_card_free_capacity, gs_all_status->sd_card_total_capacity, gs_all_status->recorded_size, gs_all_status->photo_count);
}

/**
 * @brief Send a gs_all_status message
 * @param chan MAVLink channel to send the message
 *
 * @param components_health  Bitmap showing health of components in system. Value of 0: not health. Value of 1: health.
 * @param satellites_lock_state  Showing whether the satellites has been locked.
 * @param inertial_navigation_standing_state  Showing whether the inertial navigation has been standed over.
 * @param lidar_work_state  Showing the work state of lidar.
 * @param sd_card_free_capacity  Showing the free capacity in SD card.(unit:10MB).
 * @param sd_card_total_capacity  Showing the total capacity in SD card.(unit:10MB).
 * @param recorded_size  Showing the file size has been generated in current record.(unit:10MB).
 * @param photo_count  Showing the count of photos has been taken in current record.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gs_all_status_send(mavlink_channel_t chan, uint8_t components_health, int8_t satellites_lock_state, int8_t inertial_navigation_standing_state, int8_t lidar_work_state, uint16_t sd_card_free_capacity, uint16_t sd_card_total_capacity, uint16_t recorded_size, uint16_t photo_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GS_ALL_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, sd_card_free_capacity);
    _mav_put_uint16_t(buf, 2, sd_card_total_capacity);
    _mav_put_uint16_t(buf, 4, recorded_size);
    _mav_put_uint16_t(buf, 6, photo_count);
    _mav_put_uint8_t(buf, 8, components_health);
    _mav_put_int8_t(buf, 9, satellites_lock_state);
    _mav_put_int8_t(buf, 10, inertial_navigation_standing_state);
    _mav_put_int8_t(buf, 11, lidar_work_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_ALL_STATUS, buf, MAVLINK_MSG_ID_GS_ALL_STATUS_MIN_LEN, MAVLINK_MSG_ID_GS_ALL_STATUS_LEN, MAVLINK_MSG_ID_GS_ALL_STATUS_CRC);
#else
    mavlink_gs_all_status_t packet;
    packet.sd_card_free_capacity = sd_card_free_capacity;
    packet.sd_card_total_capacity = sd_card_total_capacity;
    packet.recorded_size = recorded_size;
    packet.photo_count = photo_count;
    packet.components_health = components_health;
    packet.satellites_lock_state = satellites_lock_state;
    packet.inertial_navigation_standing_state = inertial_navigation_standing_state;
    packet.lidar_work_state = lidar_work_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_ALL_STATUS, (const char *)&packet, MAVLINK_MSG_ID_GS_ALL_STATUS_MIN_LEN, MAVLINK_MSG_ID_GS_ALL_STATUS_LEN, MAVLINK_MSG_ID_GS_ALL_STATUS_CRC);
#endif
}

/**
 * @brief Send a gs_all_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gs_all_status_send_struct(mavlink_channel_t chan, const mavlink_gs_all_status_t* gs_all_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gs_all_status_send(chan, gs_all_status->components_health, gs_all_status->satellites_lock_state, gs_all_status->inertial_navigation_standing_state, gs_all_status->lidar_work_state, gs_all_status->sd_card_free_capacity, gs_all_status->sd_card_total_capacity, gs_all_status->recorded_size, gs_all_status->photo_count);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_ALL_STATUS, (const char *)gs_all_status, MAVLINK_MSG_ID_GS_ALL_STATUS_MIN_LEN, MAVLINK_MSG_ID_GS_ALL_STATUS_LEN, MAVLINK_MSG_ID_GS_ALL_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_GS_ALL_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gs_all_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t components_health, int8_t satellites_lock_state, int8_t inertial_navigation_standing_state, int8_t lidar_work_state, uint16_t sd_card_free_capacity, uint16_t sd_card_total_capacity, uint16_t recorded_size, uint16_t photo_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, sd_card_free_capacity);
    _mav_put_uint16_t(buf, 2, sd_card_total_capacity);
    _mav_put_uint16_t(buf, 4, recorded_size);
    _mav_put_uint16_t(buf, 6, photo_count);
    _mav_put_uint8_t(buf, 8, components_health);
    _mav_put_int8_t(buf, 9, satellites_lock_state);
    _mav_put_int8_t(buf, 10, inertial_navigation_standing_state);
    _mav_put_int8_t(buf, 11, lidar_work_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_ALL_STATUS, buf, MAVLINK_MSG_ID_GS_ALL_STATUS_MIN_LEN, MAVLINK_MSG_ID_GS_ALL_STATUS_LEN, MAVLINK_MSG_ID_GS_ALL_STATUS_CRC);
#else
    mavlink_gs_all_status_t *packet = (mavlink_gs_all_status_t *)msgbuf;
    packet->sd_card_free_capacity = sd_card_free_capacity;
    packet->sd_card_total_capacity = sd_card_total_capacity;
    packet->recorded_size = recorded_size;
    packet->photo_count = photo_count;
    packet->components_health = components_health;
    packet->satellites_lock_state = satellites_lock_state;
    packet->inertial_navigation_standing_state = inertial_navigation_standing_state;
    packet->lidar_work_state = lidar_work_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GS_ALL_STATUS, (const char *)packet, MAVLINK_MSG_ID_GS_ALL_STATUS_MIN_LEN, MAVLINK_MSG_ID_GS_ALL_STATUS_LEN, MAVLINK_MSG_ID_GS_ALL_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE GS_ALL_STATUS UNPACKING


/**
 * @brief Get field components_health from gs_all_status message
 *
 * @return  Bitmap showing health of components in system. Value of 0: not health. Value of 1: health.
 */
static inline uint8_t mavlink_msg_gs_all_status_get_components_health(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field satellites_lock_state from gs_all_status message
 *
 * @return  Showing whether the satellites has been locked.
 */
static inline int8_t mavlink_msg_gs_all_status_get_satellites_lock_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  9);
}

/**
 * @brief Get field inertial_navigation_standing_state from gs_all_status message
 *
 * @return  Showing whether the inertial navigation has been standed over.
 */
static inline int8_t mavlink_msg_gs_all_status_get_inertial_navigation_standing_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  10);
}

/**
 * @brief Get field lidar_work_state from gs_all_status message
 *
 * @return  Showing the work state of lidar.
 */
static inline int8_t mavlink_msg_gs_all_status_get_lidar_work_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  11);
}

/**
 * @brief Get field sd_card_free_capacity from gs_all_status message
 *
 * @return  Showing the free capacity in SD card.(unit:10MB).
 */
static inline uint16_t mavlink_msg_gs_all_status_get_sd_card_free_capacity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field sd_card_total_capacity from gs_all_status message
 *
 * @return  Showing the total capacity in SD card.(unit:10MB).
 */
static inline uint16_t mavlink_msg_gs_all_status_get_sd_card_total_capacity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field recorded_size from gs_all_status message
 *
 * @return  Showing the file size has been generated in current record.(unit:10MB).
 */
static inline uint16_t mavlink_msg_gs_all_status_get_recorded_size(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field photo_count from gs_all_status message
 *
 * @return  Showing the count of photos has been taken in current record.
 */
static inline uint16_t mavlink_msg_gs_all_status_get_photo_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Decode a gs_all_status message into a struct
 *
 * @param msg The message to decode
 * @param gs_all_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_gs_all_status_decode(const mavlink_message_t* msg, mavlink_gs_all_status_t* gs_all_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gs_all_status->sd_card_free_capacity = mavlink_msg_gs_all_status_get_sd_card_free_capacity(msg);
    gs_all_status->sd_card_total_capacity = mavlink_msg_gs_all_status_get_sd_card_total_capacity(msg);
    gs_all_status->recorded_size = mavlink_msg_gs_all_status_get_recorded_size(msg);
    gs_all_status->photo_count = mavlink_msg_gs_all_status_get_photo_count(msg);
    gs_all_status->components_health = mavlink_msg_gs_all_status_get_components_health(msg);
    gs_all_status->satellites_lock_state = mavlink_msg_gs_all_status_get_satellites_lock_state(msg);
    gs_all_status->inertial_navigation_standing_state = mavlink_msg_gs_all_status_get_inertial_navigation_standing_state(msg);
    gs_all_status->lidar_work_state = mavlink_msg_gs_all_status_get_lidar_work_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GS_ALL_STATUS_LEN? msg->len : MAVLINK_MSG_ID_GS_ALL_STATUS_LEN;
        memset(gs_all_status, 0, MAVLINK_MSG_ID_GS_ALL_STATUS_LEN);
    memcpy(gs_all_status, _MAV_PAYLOAD(msg), len);
#endif
}
