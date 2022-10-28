/** @file
 *    @brief MAVLink comm protocol testsuite generated from geosun_addition.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef GEOSUN_ADDITION_TESTSUITE_H
#define GEOSUN_ADDITION_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_geosun_addition(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_geosun_addition(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_gs_all_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GS_ALL_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gs_all_status_t packet_in = {
        17235,17339,17443,17547,29,96,163,230
    };
    mavlink_gs_all_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.sd_card_free_capacity = packet_in.sd_card_free_capacity;
        packet1.sd_card_total_capacity = packet_in.sd_card_total_capacity;
        packet1.recorded_size = packet_in.recorded_size;
        packet1.photo_count = packet_in.photo_count;
        packet1.components_health = packet_in.components_health;
        packet1.satellites_lock_state = packet_in.satellites_lock_state;
        packet1.inertial_navigation_standing_state = packet_in.inertial_navigation_standing_state;
        packet1.lidar_work_state = packet_in.lidar_work_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GS_ALL_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GS_ALL_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_all_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gs_all_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_all_status_pack(system_id, component_id, &msg , packet1.components_health , packet1.satellites_lock_state , packet1.inertial_navigation_standing_state , packet1.lidar_work_state , packet1.sd_card_free_capacity , packet1.sd_card_total_capacity , packet1.recorded_size , packet1.photo_count );
    mavlink_msg_gs_all_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_all_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.components_health , packet1.satellites_lock_state , packet1.inertial_navigation_standing_state , packet1.lidar_work_state , packet1.sd_card_free_capacity , packet1.sd_card_total_capacity , packet1.recorded_size , packet1.photo_count );
    mavlink_msg_gs_all_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gs_all_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_all_status_send(MAVLINK_COMM_1 , packet1.components_health , packet1.satellites_lock_state , packet1.inertial_navigation_standing_state , packet1.lidar_work_state , packet1.sd_card_free_capacity , packet1.sd_card_total_capacity , packet1.recorded_size , packet1.photo_count );
    mavlink_msg_gs_all_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_gs_get_version_number(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GS_GET_VERSION_NUMBER >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gs_get_version_number_t packet_in = {
        5
    };
    mavlink_gs_get_version_number_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.reserved = packet_in.reserved;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GS_GET_VERSION_NUMBER_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GS_GET_VERSION_NUMBER_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_get_version_number_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gs_get_version_number_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_get_version_number_pack(system_id, component_id, &msg , packet1.reserved );
    mavlink_msg_gs_get_version_number_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_get_version_number_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.reserved );
    mavlink_msg_gs_get_version_number_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gs_get_version_number_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_get_version_number_send(MAVLINK_COMM_1 , packet1.reserved );
    mavlink_msg_gs_get_version_number_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_gs_ack_version_number(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gs_ack_version_number_t packet_in = {
        "ABCDEFGHIJKLMNO"
    };
    mavlink_gs_ack_version_number_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.version_number, packet_in.version_number, sizeof(char)*16);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GS_ACK_VERSION_NUMBER_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_ack_version_number_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gs_ack_version_number_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_ack_version_number_pack(system_id, component_id, &msg , packet1.version_number );
    mavlink_msg_gs_ack_version_number_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_ack_version_number_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.version_number );
    mavlink_msg_gs_ack_version_number_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gs_ack_version_number_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_ack_version_number_send(MAVLINK_COMM_1 , packet1.version_number );
    mavlink_msg_gs_ack_version_number_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_gs_get_lidar_sn(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GS_GET_LIDAR_SN >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gs_get_lidar_sn_t packet_in = {
        5
    };
    mavlink_gs_get_lidar_sn_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.reserved = packet_in.reserved;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GS_GET_LIDAR_SN_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GS_GET_LIDAR_SN_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_get_lidar_sn_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gs_get_lidar_sn_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_get_lidar_sn_pack(system_id, component_id, &msg , packet1.reserved );
    mavlink_msg_gs_get_lidar_sn_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_get_lidar_sn_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.reserved );
    mavlink_msg_gs_get_lidar_sn_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gs_get_lidar_sn_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_get_lidar_sn_send(MAVLINK_COMM_1 , packet1.reserved );
    mavlink_msg_gs_get_lidar_sn_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_gs_ack_lidar_sn(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GS_ACK_LIDAR_SN >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gs_ack_lidar_sn_t packet_in = {
        "ABCDEFGHIJK"
    };
    mavlink_gs_ack_lidar_sn_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.lidar_SN, packet_in.lidar_SN, sizeof(char)*12);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GS_ACK_LIDAR_SN_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_ack_lidar_sn_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gs_ack_lidar_sn_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_ack_lidar_sn_pack(system_id, component_id, &msg , packet1.lidar_SN );
    mavlink_msg_gs_ack_lidar_sn_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_ack_lidar_sn_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.lidar_SN );
    mavlink_msg_gs_ack_lidar_sn_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gs_ack_lidar_sn_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gs_ack_lidar_sn_send(MAVLINK_COMM_1 , packet1.lidar_SN );
    mavlink_msg_gs_ack_lidar_sn_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_geosun_addition(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_gs_all_status(system_id, component_id, last_msg);
    mavlink_test_gs_get_version_number(system_id, component_id, last_msg);
    mavlink_test_gs_ack_version_number(system_id, component_id, last_msg);
    mavlink_test_gs_get_lidar_sn(system_id, component_id, last_msg);
    mavlink_test_gs_ack_lidar_sn(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // GEOSUN_ADDITION_TESTSUITE_H
