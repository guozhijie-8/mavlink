#pragma once
// MESSAGE EF_GUIDANCE_STATE PACKING

#define MAVLINK_MSG_ID_EF_GUIDANCE_STATE 12000

MAVPACKED(
typedef struct __mavlink_ef_guidance_state_t {
 float ned_pos_x; /*< ned position.*/
 float ned_pos_y; /*< ned position.*/
 float enu_pos_z; /*< enu position.*/
 float ned_vel_x; /*< ned position.*/
 float ned_vel_y; /*< ned position.*/
 float enu_vel_z; /*< enu position.*/
 float ned_acc_x; /*< ned position.*/
 float ned_acc_y; /*< ned position.*/
 float enu_acc_z; /*< enu position.*/
 float ref_pos_x; /*< ref ned position.*/
 float ref_pos_y; /*< ref ned position.*/
 float ref_pos_z; /*< ref enu position.*/
 float ref_vel_x; /*< ref ned velocity.*/
 float ref_vel_y; /*< ref ned velocity.*/
 float ref_vel_z; /*< ref enu velocity.*/
 float ref_acc_z; /*< ref enu acceleration.*/
 float thrust; /*< thrust output.*/
}) mavlink_ef_guidance_state_t;

#define MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN 68
#define MAVLINK_MSG_ID_EF_GUIDANCE_STATE_MIN_LEN 68
#define MAVLINK_MSG_ID_12000_LEN 68
#define MAVLINK_MSG_ID_12000_MIN_LEN 68

#define MAVLINK_MSG_ID_EF_GUIDANCE_STATE_CRC 197
#define MAVLINK_MSG_ID_12000_CRC 197



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_EF_GUIDANCE_STATE { \
    12000, \
    "EF_GUIDANCE_STATE", \
    17, \
    {  { "ned_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ef_guidance_state_t, ned_pos_x) }, \
         { "ned_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ef_guidance_state_t, ned_pos_y) }, \
         { "enu_pos_z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ef_guidance_state_t, enu_pos_z) }, \
         { "ned_vel_x", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ef_guidance_state_t, ned_vel_x) }, \
         { "ned_vel_y", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ef_guidance_state_t, ned_vel_y) }, \
         { "enu_vel_z", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ef_guidance_state_t, enu_vel_z) }, \
         { "ned_acc_x", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ef_guidance_state_t, ned_acc_x) }, \
         { "ned_acc_y", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_ef_guidance_state_t, ned_acc_y) }, \
         { "enu_acc_z", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_ef_guidance_state_t, enu_acc_z) }, \
         { "ref_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_ef_guidance_state_t, ref_pos_x) }, \
         { "ref_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_ef_guidance_state_t, ref_pos_y) }, \
         { "ref_pos_z", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_ef_guidance_state_t, ref_pos_z) }, \
         { "ref_vel_x", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_ef_guidance_state_t, ref_vel_x) }, \
         { "ref_vel_y", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_ef_guidance_state_t, ref_vel_y) }, \
         { "ref_vel_z", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_ef_guidance_state_t, ref_vel_z) }, \
         { "ref_acc_z", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_ef_guidance_state_t, ref_acc_z) }, \
         { "thrust", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_ef_guidance_state_t, thrust) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_EF_GUIDANCE_STATE { \
    "EF_GUIDANCE_STATE", \
    17, \
    {  { "ned_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ef_guidance_state_t, ned_pos_x) }, \
         { "ned_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ef_guidance_state_t, ned_pos_y) }, \
         { "enu_pos_z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ef_guidance_state_t, enu_pos_z) }, \
         { "ned_vel_x", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ef_guidance_state_t, ned_vel_x) }, \
         { "ned_vel_y", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ef_guidance_state_t, ned_vel_y) }, \
         { "enu_vel_z", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ef_guidance_state_t, enu_vel_z) }, \
         { "ned_acc_x", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ef_guidance_state_t, ned_acc_x) }, \
         { "ned_acc_y", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_ef_guidance_state_t, ned_acc_y) }, \
         { "enu_acc_z", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_ef_guidance_state_t, enu_acc_z) }, \
         { "ref_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_ef_guidance_state_t, ref_pos_x) }, \
         { "ref_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_ef_guidance_state_t, ref_pos_y) }, \
         { "ref_pos_z", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_ef_guidance_state_t, ref_pos_z) }, \
         { "ref_vel_x", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_ef_guidance_state_t, ref_vel_x) }, \
         { "ref_vel_y", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_ef_guidance_state_t, ref_vel_y) }, \
         { "ref_vel_z", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_ef_guidance_state_t, ref_vel_z) }, \
         { "ref_acc_z", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_ef_guidance_state_t, ref_acc_z) }, \
         { "thrust", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_ef_guidance_state_t, thrust) }, \
         } \
}
#endif

/**
 * @brief Pack a ef_guidance_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param ned_pos_x ned position.
 * @param ned_pos_y ned position.
 * @param enu_pos_z enu position.
 * @param ned_vel_x ned position.
 * @param ned_vel_y ned position.
 * @param enu_vel_z enu position.
 * @param ned_acc_x ned position.
 * @param ned_acc_y ned position.
 * @param enu_acc_z enu position.
 * @param ref_pos_x ref ned position.
 * @param ref_pos_y ref ned position.
 * @param ref_pos_z ref enu position.
 * @param ref_vel_x ref ned velocity.
 * @param ref_vel_y ref ned velocity.
 * @param ref_vel_z ref enu velocity.
 * @param ref_acc_z ref enu acceleration.
 * @param thrust thrust output.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ef_guidance_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float ned_pos_x, float ned_pos_y, float enu_pos_z, float ned_vel_x, float ned_vel_y, float enu_vel_z, float ned_acc_x, float ned_acc_y, float enu_acc_z, float ref_pos_x, float ref_pos_y, float ref_pos_z, float ref_vel_x, float ref_vel_y, float ref_vel_z, float ref_acc_z, float thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN];
    _mav_put_float(buf, 0, ned_pos_x);
    _mav_put_float(buf, 4, ned_pos_y);
    _mav_put_float(buf, 8, enu_pos_z);
    _mav_put_float(buf, 12, ned_vel_x);
    _mav_put_float(buf, 16, ned_vel_y);
    _mav_put_float(buf, 20, enu_vel_z);
    _mav_put_float(buf, 24, ned_acc_x);
    _mav_put_float(buf, 28, ned_acc_y);
    _mav_put_float(buf, 32, enu_acc_z);
    _mav_put_float(buf, 36, ref_pos_x);
    _mav_put_float(buf, 40, ref_pos_y);
    _mav_put_float(buf, 44, ref_pos_z);
    _mav_put_float(buf, 48, ref_vel_x);
    _mav_put_float(buf, 52, ref_vel_y);
    _mav_put_float(buf, 56, ref_vel_z);
    _mav_put_float(buf, 60, ref_acc_z);
    _mav_put_float(buf, 64, thrust);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN);
#else
    mavlink_ef_guidance_state_t packet;
    packet.ned_pos_x = ned_pos_x;
    packet.ned_pos_y = ned_pos_y;
    packet.enu_pos_z = enu_pos_z;
    packet.ned_vel_x = ned_vel_x;
    packet.ned_vel_y = ned_vel_y;
    packet.enu_vel_z = enu_vel_z;
    packet.ned_acc_x = ned_acc_x;
    packet.ned_acc_y = ned_acc_y;
    packet.enu_acc_z = enu_acc_z;
    packet.ref_pos_x = ref_pos_x;
    packet.ref_pos_y = ref_pos_y;
    packet.ref_pos_z = ref_pos_z;
    packet.ref_vel_x = ref_vel_x;
    packet.ref_vel_y = ref_vel_y;
    packet.ref_vel_z = ref_vel_z;
    packet.ref_acc_z = ref_acc_z;
    packet.thrust = thrust;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EF_GUIDANCE_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_MIN_LEN, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_CRC);
}

/**
 * @brief Pack a ef_guidance_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ned_pos_x ned position.
 * @param ned_pos_y ned position.
 * @param enu_pos_z enu position.
 * @param ned_vel_x ned position.
 * @param ned_vel_y ned position.
 * @param enu_vel_z enu position.
 * @param ned_acc_x ned position.
 * @param ned_acc_y ned position.
 * @param enu_acc_z enu position.
 * @param ref_pos_x ref ned position.
 * @param ref_pos_y ref ned position.
 * @param ref_pos_z ref enu position.
 * @param ref_vel_x ref ned velocity.
 * @param ref_vel_y ref ned velocity.
 * @param ref_vel_z ref enu velocity.
 * @param ref_acc_z ref enu acceleration.
 * @param thrust thrust output.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ef_guidance_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float ned_pos_x,float ned_pos_y,float enu_pos_z,float ned_vel_x,float ned_vel_y,float enu_vel_z,float ned_acc_x,float ned_acc_y,float enu_acc_z,float ref_pos_x,float ref_pos_y,float ref_pos_z,float ref_vel_x,float ref_vel_y,float ref_vel_z,float ref_acc_z,float thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN];
    _mav_put_float(buf, 0, ned_pos_x);
    _mav_put_float(buf, 4, ned_pos_y);
    _mav_put_float(buf, 8, enu_pos_z);
    _mav_put_float(buf, 12, ned_vel_x);
    _mav_put_float(buf, 16, ned_vel_y);
    _mav_put_float(buf, 20, enu_vel_z);
    _mav_put_float(buf, 24, ned_acc_x);
    _mav_put_float(buf, 28, ned_acc_y);
    _mav_put_float(buf, 32, enu_acc_z);
    _mav_put_float(buf, 36, ref_pos_x);
    _mav_put_float(buf, 40, ref_pos_y);
    _mav_put_float(buf, 44, ref_pos_z);
    _mav_put_float(buf, 48, ref_vel_x);
    _mav_put_float(buf, 52, ref_vel_y);
    _mav_put_float(buf, 56, ref_vel_z);
    _mav_put_float(buf, 60, ref_acc_z);
    _mav_put_float(buf, 64, thrust);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN);
#else
    mavlink_ef_guidance_state_t packet;
    packet.ned_pos_x = ned_pos_x;
    packet.ned_pos_y = ned_pos_y;
    packet.enu_pos_z = enu_pos_z;
    packet.ned_vel_x = ned_vel_x;
    packet.ned_vel_y = ned_vel_y;
    packet.enu_vel_z = enu_vel_z;
    packet.ned_acc_x = ned_acc_x;
    packet.ned_acc_y = ned_acc_y;
    packet.enu_acc_z = enu_acc_z;
    packet.ref_pos_x = ref_pos_x;
    packet.ref_pos_y = ref_pos_y;
    packet.ref_pos_z = ref_pos_z;
    packet.ref_vel_x = ref_vel_x;
    packet.ref_vel_y = ref_vel_y;
    packet.ref_vel_z = ref_vel_z;
    packet.ref_acc_z = ref_acc_z;
    packet.thrust = thrust;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EF_GUIDANCE_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_MIN_LEN, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_CRC);
}

/**
 * @brief Encode a ef_guidance_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ef_guidance_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ef_guidance_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ef_guidance_state_t* ef_guidance_state)
{
    return mavlink_msg_ef_guidance_state_pack(system_id, component_id, msg, ef_guidance_state->ned_pos_x, ef_guidance_state->ned_pos_y, ef_guidance_state->enu_pos_z, ef_guidance_state->ned_vel_x, ef_guidance_state->ned_vel_y, ef_guidance_state->enu_vel_z, ef_guidance_state->ned_acc_x, ef_guidance_state->ned_acc_y, ef_guidance_state->enu_acc_z, ef_guidance_state->ref_pos_x, ef_guidance_state->ref_pos_y, ef_guidance_state->ref_pos_z, ef_guidance_state->ref_vel_x, ef_guidance_state->ref_vel_y, ef_guidance_state->ref_vel_z, ef_guidance_state->ref_acc_z, ef_guidance_state->thrust);
}

/**
 * @brief Encode a ef_guidance_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ef_guidance_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ef_guidance_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ef_guidance_state_t* ef_guidance_state)
{
    return mavlink_msg_ef_guidance_state_pack_chan(system_id, component_id, chan, msg, ef_guidance_state->ned_pos_x, ef_guidance_state->ned_pos_y, ef_guidance_state->enu_pos_z, ef_guidance_state->ned_vel_x, ef_guidance_state->ned_vel_y, ef_guidance_state->enu_vel_z, ef_guidance_state->ned_acc_x, ef_guidance_state->ned_acc_y, ef_guidance_state->enu_acc_z, ef_guidance_state->ref_pos_x, ef_guidance_state->ref_pos_y, ef_guidance_state->ref_pos_z, ef_guidance_state->ref_vel_x, ef_guidance_state->ref_vel_y, ef_guidance_state->ref_vel_z, ef_guidance_state->ref_acc_z, ef_guidance_state->thrust);
}

/**
 * @brief Send a ef_guidance_state message
 * @param chan MAVLink channel to send the message
 *
 * @param ned_pos_x ned position.
 * @param ned_pos_y ned position.
 * @param enu_pos_z enu position.
 * @param ned_vel_x ned position.
 * @param ned_vel_y ned position.
 * @param enu_vel_z enu position.
 * @param ned_acc_x ned position.
 * @param ned_acc_y ned position.
 * @param enu_acc_z enu position.
 * @param ref_pos_x ref ned position.
 * @param ref_pos_y ref ned position.
 * @param ref_pos_z ref enu position.
 * @param ref_vel_x ref ned velocity.
 * @param ref_vel_y ref ned velocity.
 * @param ref_vel_z ref enu velocity.
 * @param ref_acc_z ref enu acceleration.
 * @param thrust thrust output.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ef_guidance_state_send(mavlink_channel_t chan, float ned_pos_x, float ned_pos_y, float enu_pos_z, float ned_vel_x, float ned_vel_y, float enu_vel_z, float ned_acc_x, float ned_acc_y, float enu_acc_z, float ref_pos_x, float ref_pos_y, float ref_pos_z, float ref_vel_x, float ref_vel_y, float ref_vel_z, float ref_acc_z, float thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN];
    _mav_put_float(buf, 0, ned_pos_x);
    _mav_put_float(buf, 4, ned_pos_y);
    _mav_put_float(buf, 8, enu_pos_z);
    _mav_put_float(buf, 12, ned_vel_x);
    _mav_put_float(buf, 16, ned_vel_y);
    _mav_put_float(buf, 20, enu_vel_z);
    _mav_put_float(buf, 24, ned_acc_x);
    _mav_put_float(buf, 28, ned_acc_y);
    _mav_put_float(buf, 32, enu_acc_z);
    _mav_put_float(buf, 36, ref_pos_x);
    _mav_put_float(buf, 40, ref_pos_y);
    _mav_put_float(buf, 44, ref_pos_z);
    _mav_put_float(buf, 48, ref_vel_x);
    _mav_put_float(buf, 52, ref_vel_y);
    _mav_put_float(buf, 56, ref_vel_z);
    _mav_put_float(buf, 60, ref_acc_z);
    _mav_put_float(buf, 64, thrust);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EF_GUIDANCE_STATE, buf, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_MIN_LEN, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_CRC);
#else
    mavlink_ef_guidance_state_t packet;
    packet.ned_pos_x = ned_pos_x;
    packet.ned_pos_y = ned_pos_y;
    packet.enu_pos_z = enu_pos_z;
    packet.ned_vel_x = ned_vel_x;
    packet.ned_vel_y = ned_vel_y;
    packet.enu_vel_z = enu_vel_z;
    packet.ned_acc_x = ned_acc_x;
    packet.ned_acc_y = ned_acc_y;
    packet.enu_acc_z = enu_acc_z;
    packet.ref_pos_x = ref_pos_x;
    packet.ref_pos_y = ref_pos_y;
    packet.ref_pos_z = ref_pos_z;
    packet.ref_vel_x = ref_vel_x;
    packet.ref_vel_y = ref_vel_y;
    packet.ref_vel_z = ref_vel_z;
    packet.ref_acc_z = ref_acc_z;
    packet.thrust = thrust;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EF_GUIDANCE_STATE, (const char *)&packet, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_MIN_LEN, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_CRC);
#endif
}

/**
 * @brief Send a ef_guidance_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ef_guidance_state_send_struct(mavlink_channel_t chan, const mavlink_ef_guidance_state_t* ef_guidance_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ef_guidance_state_send(chan, ef_guidance_state->ned_pos_x, ef_guidance_state->ned_pos_y, ef_guidance_state->enu_pos_z, ef_guidance_state->ned_vel_x, ef_guidance_state->ned_vel_y, ef_guidance_state->enu_vel_z, ef_guidance_state->ned_acc_x, ef_guidance_state->ned_acc_y, ef_guidance_state->enu_acc_z, ef_guidance_state->ref_pos_x, ef_guidance_state->ref_pos_y, ef_guidance_state->ref_pos_z, ef_guidance_state->ref_vel_x, ef_guidance_state->ref_vel_y, ef_guidance_state->ref_vel_z, ef_guidance_state->ref_acc_z, ef_guidance_state->thrust);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EF_GUIDANCE_STATE, (const char *)ef_guidance_state, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_MIN_LEN, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ef_guidance_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float ned_pos_x, float ned_pos_y, float enu_pos_z, float ned_vel_x, float ned_vel_y, float enu_vel_z, float ned_acc_x, float ned_acc_y, float enu_acc_z, float ref_pos_x, float ref_pos_y, float ref_pos_z, float ref_vel_x, float ref_vel_y, float ref_vel_z, float ref_acc_z, float thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, ned_pos_x);
    _mav_put_float(buf, 4, ned_pos_y);
    _mav_put_float(buf, 8, enu_pos_z);
    _mav_put_float(buf, 12, ned_vel_x);
    _mav_put_float(buf, 16, ned_vel_y);
    _mav_put_float(buf, 20, enu_vel_z);
    _mav_put_float(buf, 24, ned_acc_x);
    _mav_put_float(buf, 28, ned_acc_y);
    _mav_put_float(buf, 32, enu_acc_z);
    _mav_put_float(buf, 36, ref_pos_x);
    _mav_put_float(buf, 40, ref_pos_y);
    _mav_put_float(buf, 44, ref_pos_z);
    _mav_put_float(buf, 48, ref_vel_x);
    _mav_put_float(buf, 52, ref_vel_y);
    _mav_put_float(buf, 56, ref_vel_z);
    _mav_put_float(buf, 60, ref_acc_z);
    _mav_put_float(buf, 64, thrust);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EF_GUIDANCE_STATE, buf, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_MIN_LEN, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_CRC);
#else
    mavlink_ef_guidance_state_t *packet = (mavlink_ef_guidance_state_t *)msgbuf;
    packet->ned_pos_x = ned_pos_x;
    packet->ned_pos_y = ned_pos_y;
    packet->enu_pos_z = enu_pos_z;
    packet->ned_vel_x = ned_vel_x;
    packet->ned_vel_y = ned_vel_y;
    packet->enu_vel_z = enu_vel_z;
    packet->ned_acc_x = ned_acc_x;
    packet->ned_acc_y = ned_acc_y;
    packet->enu_acc_z = enu_acc_z;
    packet->ref_pos_x = ref_pos_x;
    packet->ref_pos_y = ref_pos_y;
    packet->ref_pos_z = ref_pos_z;
    packet->ref_vel_x = ref_vel_x;
    packet->ref_vel_y = ref_vel_y;
    packet->ref_vel_z = ref_vel_z;
    packet->ref_acc_z = ref_acc_z;
    packet->thrust = thrust;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EF_GUIDANCE_STATE, (const char *)packet, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_MIN_LEN, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE EF_GUIDANCE_STATE UNPACKING


/**
 * @brief Get field ned_pos_x from ef_guidance_state message
 *
 * @return ned position.
 */
static inline float mavlink_msg_ef_guidance_state_get_ned_pos_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field ned_pos_y from ef_guidance_state message
 *
 * @return ned position.
 */
static inline float mavlink_msg_ef_guidance_state_get_ned_pos_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field enu_pos_z from ef_guidance_state message
 *
 * @return enu position.
 */
static inline float mavlink_msg_ef_guidance_state_get_enu_pos_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field ned_vel_x from ef_guidance_state message
 *
 * @return ned position.
 */
static inline float mavlink_msg_ef_guidance_state_get_ned_vel_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field ned_vel_y from ef_guidance_state message
 *
 * @return ned position.
 */
static inline float mavlink_msg_ef_guidance_state_get_ned_vel_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field enu_vel_z from ef_guidance_state message
 *
 * @return enu position.
 */
static inline float mavlink_msg_ef_guidance_state_get_enu_vel_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field ned_acc_x from ef_guidance_state message
 *
 * @return ned position.
 */
static inline float mavlink_msg_ef_guidance_state_get_ned_acc_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field ned_acc_y from ef_guidance_state message
 *
 * @return ned position.
 */
static inline float mavlink_msg_ef_guidance_state_get_ned_acc_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field enu_acc_z from ef_guidance_state message
 *
 * @return enu position.
 */
static inline float mavlink_msg_ef_guidance_state_get_enu_acc_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field ref_pos_x from ef_guidance_state message
 *
 * @return ref ned position.
 */
static inline float mavlink_msg_ef_guidance_state_get_ref_pos_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field ref_pos_y from ef_guidance_state message
 *
 * @return ref ned position.
 */
static inline float mavlink_msg_ef_guidance_state_get_ref_pos_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field ref_pos_z from ef_guidance_state message
 *
 * @return ref enu position.
 */
static inline float mavlink_msg_ef_guidance_state_get_ref_pos_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field ref_vel_x from ef_guidance_state message
 *
 * @return ref ned velocity.
 */
static inline float mavlink_msg_ef_guidance_state_get_ref_vel_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field ref_vel_y from ef_guidance_state message
 *
 * @return ref ned velocity.
 */
static inline float mavlink_msg_ef_guidance_state_get_ref_vel_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field ref_vel_z from ef_guidance_state message
 *
 * @return ref enu velocity.
 */
static inline float mavlink_msg_ef_guidance_state_get_ref_vel_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field ref_acc_z from ef_guidance_state message
 *
 * @return ref enu acceleration.
 */
static inline float mavlink_msg_ef_guidance_state_get_ref_acc_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Get field thrust from ef_guidance_state message
 *
 * @return thrust output.
 */
static inline float mavlink_msg_ef_guidance_state_get_thrust(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  64);
}

/**
 * @brief Decode a ef_guidance_state message into a struct
 *
 * @param msg The message to decode
 * @param ef_guidance_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_ef_guidance_state_decode(const mavlink_message_t* msg, mavlink_ef_guidance_state_t* ef_guidance_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ef_guidance_state->ned_pos_x = mavlink_msg_ef_guidance_state_get_ned_pos_x(msg);
    ef_guidance_state->ned_pos_y = mavlink_msg_ef_guidance_state_get_ned_pos_y(msg);
    ef_guidance_state->enu_pos_z = mavlink_msg_ef_guidance_state_get_enu_pos_z(msg);
    ef_guidance_state->ned_vel_x = mavlink_msg_ef_guidance_state_get_ned_vel_x(msg);
    ef_guidance_state->ned_vel_y = mavlink_msg_ef_guidance_state_get_ned_vel_y(msg);
    ef_guidance_state->enu_vel_z = mavlink_msg_ef_guidance_state_get_enu_vel_z(msg);
    ef_guidance_state->ned_acc_x = mavlink_msg_ef_guidance_state_get_ned_acc_x(msg);
    ef_guidance_state->ned_acc_y = mavlink_msg_ef_guidance_state_get_ned_acc_y(msg);
    ef_guidance_state->enu_acc_z = mavlink_msg_ef_guidance_state_get_enu_acc_z(msg);
    ef_guidance_state->ref_pos_x = mavlink_msg_ef_guidance_state_get_ref_pos_x(msg);
    ef_guidance_state->ref_pos_y = mavlink_msg_ef_guidance_state_get_ref_pos_y(msg);
    ef_guidance_state->ref_pos_z = mavlink_msg_ef_guidance_state_get_ref_pos_z(msg);
    ef_guidance_state->ref_vel_x = mavlink_msg_ef_guidance_state_get_ref_vel_x(msg);
    ef_guidance_state->ref_vel_y = mavlink_msg_ef_guidance_state_get_ref_vel_y(msg);
    ef_guidance_state->ref_vel_z = mavlink_msg_ef_guidance_state_get_ref_vel_z(msg);
    ef_guidance_state->ref_acc_z = mavlink_msg_ef_guidance_state_get_ref_acc_z(msg);
    ef_guidance_state->thrust = mavlink_msg_ef_guidance_state_get_thrust(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN? msg->len : MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN;
        memset(ef_guidance_state, 0, MAVLINK_MSG_ID_EF_GUIDANCE_STATE_LEN);
    memcpy(ef_guidance_state, _MAV_PAYLOAD(msg), len);
#endif
}
