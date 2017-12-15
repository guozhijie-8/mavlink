/** @file
 *    @brief MAVLink comm protocol testsuite generated from efficien.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef EFFICIEN_TESTSUITE_H
#define EFFICIEN_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_ardupilotmega(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_efficien(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_ardupilotmega(system_id, component_id, last_msg);
    mavlink_test_efficien(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"
#include "../ardupilotmega/testsuite.h"


static void mavlink_test_ef_guidance_state(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_EF_GUIDANCE_STATE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ef_guidance_state_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0,325.0,353.0,381.0,409.0,437.0,465.0
    };
    mavlink_ef_guidance_state_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.ned_pos_x = packet_in.ned_pos_x;
        packet1.ned_pos_y = packet_in.ned_pos_y;
        packet1.enu_pos_z = packet_in.enu_pos_z;
        packet1.ned_vel_x = packet_in.ned_vel_x;
        packet1.ned_vel_y = packet_in.ned_vel_y;
        packet1.enu_vel_z = packet_in.enu_vel_z;
        packet1.ned_acc_x = packet_in.ned_acc_x;
        packet1.ned_acc_y = packet_in.ned_acc_y;
        packet1.enu_acc_z = packet_in.enu_acc_z;
        packet1.ref_pos_x = packet_in.ref_pos_x;
        packet1.ref_pos_y = packet_in.ref_pos_y;
        packet1.ref_pos_z = packet_in.ref_pos_z;
        packet1.ref_vel_x = packet_in.ref_vel_x;
        packet1.ref_vel_y = packet_in.ref_vel_y;
        packet1.ref_vel_z = packet_in.ref_vel_z;
        packet1.ref_acc_z = packet_in.ref_acc_z;
        packet1.thrust = packet_in.thrust;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_EF_GUIDANCE_STATE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_EF_GUIDANCE_STATE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ef_guidance_state_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ef_guidance_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ef_guidance_state_pack(system_id, component_id, &msg , packet1.ned_pos_x , packet1.ned_pos_y , packet1.enu_pos_z , packet1.ned_vel_x , packet1.ned_vel_y , packet1.enu_vel_z , packet1.ned_acc_x , packet1.ned_acc_y , packet1.enu_acc_z , packet1.ref_pos_x , packet1.ref_pos_y , packet1.ref_pos_z , packet1.ref_vel_x , packet1.ref_vel_y , packet1.ref_vel_z , packet1.ref_acc_z , packet1.thrust );
    mavlink_msg_ef_guidance_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ef_guidance_state_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.ned_pos_x , packet1.ned_pos_y , packet1.enu_pos_z , packet1.ned_vel_x , packet1.ned_vel_y , packet1.enu_vel_z , packet1.ned_acc_x , packet1.ned_acc_y , packet1.enu_acc_z , packet1.ref_pos_x , packet1.ref_pos_y , packet1.ref_pos_z , packet1.ref_vel_x , packet1.ref_vel_y , packet1.ref_vel_z , packet1.ref_acc_z , packet1.thrust );
    mavlink_msg_ef_guidance_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ef_guidance_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ef_guidance_state_send(MAVLINK_COMM_1 , packet1.ned_pos_x , packet1.ned_pos_y , packet1.enu_pos_z , packet1.ned_vel_x , packet1.ned_vel_y , packet1.enu_vel_z , packet1.ned_acc_x , packet1.ned_acc_y , packet1.enu_acc_z , packet1.ref_pos_x , packet1.ref_pos_y , packet1.ref_pos_z , packet1.ref_vel_x , packet1.ref_vel_y , packet1.ref_vel_z , packet1.ref_acc_z , packet1.thrust );
    mavlink_msg_ef_guidance_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_efficien(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_ef_guidance_state(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // EFFICIEN_TESTSUITE_H
