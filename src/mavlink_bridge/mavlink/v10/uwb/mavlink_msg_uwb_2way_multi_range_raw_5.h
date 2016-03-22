// MESSAGE UWB_2WAY_MULTI_RANGE_RAW_5 PACKING

#define MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5 185

typedef struct __mavlink_uwb_2way_multi_range_raw_5_t
{
 uint64_t timestamp_master_request_1_recv; /*< Timestamp of master request 1 on slave module.*/
 uint64_t timestamp_slave_reply_send; /*< Timestamp of slave reply on slave module.*/
 uint64_t timestamp_master_request_2_recv; /*< Timestamp of master request 2 on slave module.*/
 uint64_t timestamp_master_request_1[5]; /*< Timestamp of master request 1 on tracker modules.*/
 uint64_t timestamp_slave_reply[5]; /*< Timestamp of slave reply on tracker modules.*/
 uint64_t timestamp_master_request_2[5]; /*< Timestamp of master request 2 on tracker modules.*/
 uint8_t num_of_units; /*< Number of UWB units on the tracker.*/
 uint8_t address; /*< Address of UWB tracker.*/
 uint8_t remote_address; /*< Address of remote UWB unit that was used as slave.*/
} mavlink_uwb_2way_multi_range_raw_5_t;

#define MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN 147
#define MAVLINK_MSG_ID_185_LEN 147

#define MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_CRC 101
#define MAVLINK_MSG_ID_185_CRC 101

#define MAVLINK_MSG_UWB_2WAY_MULTI_RANGE_RAW_5_FIELD_TIMESTAMP_MASTER_REQUEST_1_LEN 5
#define MAVLINK_MSG_UWB_2WAY_MULTI_RANGE_RAW_5_FIELD_TIMESTAMP_SLAVE_REPLY_LEN 5
#define MAVLINK_MSG_UWB_2WAY_MULTI_RANGE_RAW_5_FIELD_TIMESTAMP_MASTER_REQUEST_2_LEN 5

#define MAVLINK_MESSAGE_INFO_UWB_2WAY_MULTI_RANGE_RAW_5 { \
	"UWB_2WAY_MULTI_RANGE_RAW_5", \
	9, \
	{  { "timestamp_master_request_1_recv", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_uwb_2way_multi_range_raw_5_t, timestamp_master_request_1_recv) }, \
         { "timestamp_slave_reply_send", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_uwb_2way_multi_range_raw_5_t, timestamp_slave_reply_send) }, \
         { "timestamp_master_request_2_recv", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_uwb_2way_multi_range_raw_5_t, timestamp_master_request_2_recv) }, \
         { "timestamp_master_request_1", NULL, MAVLINK_TYPE_UINT64_T, 5, 24, offsetof(mavlink_uwb_2way_multi_range_raw_5_t, timestamp_master_request_1) }, \
         { "timestamp_slave_reply", NULL, MAVLINK_TYPE_UINT64_T, 5, 64, offsetof(mavlink_uwb_2way_multi_range_raw_5_t, timestamp_slave_reply) }, \
         { "timestamp_master_request_2", NULL, MAVLINK_TYPE_UINT64_T, 5, 104, offsetof(mavlink_uwb_2way_multi_range_raw_5_t, timestamp_master_request_2) }, \
         { "num_of_units", NULL, MAVLINK_TYPE_UINT8_T, 0, 144, offsetof(mavlink_uwb_2way_multi_range_raw_5_t, num_of_units) }, \
         { "address", NULL, MAVLINK_TYPE_UINT8_T, 0, 145, offsetof(mavlink_uwb_2way_multi_range_raw_5_t, address) }, \
         { "remote_address", NULL, MAVLINK_TYPE_UINT8_T, 0, 146, offsetof(mavlink_uwb_2way_multi_range_raw_5_t, remote_address) }, \
         } \
}


/**
 * @brief Pack a uwb_2way_multi_range_raw_5 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param num_of_units Number of UWB units on the tracker.
 * @param address Address of UWB tracker.
 * @param remote_address Address of remote UWB unit that was used as slave.
 * @param timestamp_master_request_1_recv Timestamp of master request 1 on slave module.
 * @param timestamp_slave_reply_send Timestamp of slave reply on slave module.
 * @param timestamp_master_request_2_recv Timestamp of master request 2 on slave module.
 * @param timestamp_master_request_1 Timestamp of master request 1 on tracker modules.
 * @param timestamp_slave_reply Timestamp of slave reply on tracker modules.
 * @param timestamp_master_request_2 Timestamp of master request 2 on tracker modules.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uwb_2way_multi_range_raw_5_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t num_of_units, uint8_t address, uint8_t remote_address, uint64_t timestamp_master_request_1_recv, uint64_t timestamp_slave_reply_send, uint64_t timestamp_master_request_2_recv, const uint64_t *timestamp_master_request_1, const uint64_t *timestamp_slave_reply, const uint64_t *timestamp_master_request_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN];
	_mav_put_uint64_t(buf, 0, timestamp_master_request_1_recv);
	_mav_put_uint64_t(buf, 8, timestamp_slave_reply_send);
	_mav_put_uint64_t(buf, 16, timestamp_master_request_2_recv);
	_mav_put_uint8_t(buf, 144, num_of_units);
	_mav_put_uint8_t(buf, 145, address);
	_mav_put_uint8_t(buf, 146, remote_address);
	_mav_put_uint64_t_array(buf, 24, timestamp_master_request_1, 5);
	_mav_put_uint64_t_array(buf, 64, timestamp_slave_reply, 5);
	_mav_put_uint64_t_array(buf, 104, timestamp_master_request_2, 5);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN);
#else
	mavlink_uwb_2way_multi_range_raw_5_t packet;
	packet.timestamp_master_request_1_recv = timestamp_master_request_1_recv;
	packet.timestamp_slave_reply_send = timestamp_slave_reply_send;
	packet.timestamp_master_request_2_recv = timestamp_master_request_2_recv;
	packet.num_of_units = num_of_units;
	packet.address = address;
	packet.remote_address = remote_address;
	mav_array_memcpy(packet.timestamp_master_request_1, timestamp_master_request_1, sizeof(uint64_t)*5);
	mav_array_memcpy(packet.timestamp_slave_reply, timestamp_slave_reply, sizeof(uint64_t)*5);
	mav_array_memcpy(packet.timestamp_master_request_2, timestamp_master_request_2, sizeof(uint64_t)*5);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN);
#endif
}

/**
 * @brief Pack a uwb_2way_multi_range_raw_5 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param num_of_units Number of UWB units on the tracker.
 * @param address Address of UWB tracker.
 * @param remote_address Address of remote UWB unit that was used as slave.
 * @param timestamp_master_request_1_recv Timestamp of master request 1 on slave module.
 * @param timestamp_slave_reply_send Timestamp of slave reply on slave module.
 * @param timestamp_master_request_2_recv Timestamp of master request 2 on slave module.
 * @param timestamp_master_request_1 Timestamp of master request 1 on tracker modules.
 * @param timestamp_slave_reply Timestamp of slave reply on tracker modules.
 * @param timestamp_master_request_2 Timestamp of master request 2 on tracker modules.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uwb_2way_multi_range_raw_5_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t num_of_units,uint8_t address,uint8_t remote_address,uint64_t timestamp_master_request_1_recv,uint64_t timestamp_slave_reply_send,uint64_t timestamp_master_request_2_recv,const uint64_t *timestamp_master_request_1,const uint64_t *timestamp_slave_reply,const uint64_t *timestamp_master_request_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN];
	_mav_put_uint64_t(buf, 0, timestamp_master_request_1_recv);
	_mav_put_uint64_t(buf, 8, timestamp_slave_reply_send);
	_mav_put_uint64_t(buf, 16, timestamp_master_request_2_recv);
	_mav_put_uint8_t(buf, 144, num_of_units);
	_mav_put_uint8_t(buf, 145, address);
	_mav_put_uint8_t(buf, 146, remote_address);
	_mav_put_uint64_t_array(buf, 24, timestamp_master_request_1, 5);
	_mav_put_uint64_t_array(buf, 64, timestamp_slave_reply, 5);
	_mav_put_uint64_t_array(buf, 104, timestamp_master_request_2, 5);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN);
#else
	mavlink_uwb_2way_multi_range_raw_5_t packet;
	packet.timestamp_master_request_1_recv = timestamp_master_request_1_recv;
	packet.timestamp_slave_reply_send = timestamp_slave_reply_send;
	packet.timestamp_master_request_2_recv = timestamp_master_request_2_recv;
	packet.num_of_units = num_of_units;
	packet.address = address;
	packet.remote_address = remote_address;
	mav_array_memcpy(packet.timestamp_master_request_1, timestamp_master_request_1, sizeof(uint64_t)*5);
	mav_array_memcpy(packet.timestamp_slave_reply, timestamp_slave_reply, sizeof(uint64_t)*5);
	mav_array_memcpy(packet.timestamp_master_request_2, timestamp_master_request_2, sizeof(uint64_t)*5);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN);
#endif
}

/**
 * @brief Encode a uwb_2way_multi_range_raw_5 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uwb_2way_multi_range_raw_5 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uwb_2way_multi_range_raw_5_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uwb_2way_multi_range_raw_5_t* uwb_2way_multi_range_raw_5)
{
	return mavlink_msg_uwb_2way_multi_range_raw_5_pack(system_id, component_id, msg, uwb_2way_multi_range_raw_5->num_of_units, uwb_2way_multi_range_raw_5->address, uwb_2way_multi_range_raw_5->remote_address, uwb_2way_multi_range_raw_5->timestamp_master_request_1_recv, uwb_2way_multi_range_raw_5->timestamp_slave_reply_send, uwb_2way_multi_range_raw_5->timestamp_master_request_2_recv, uwb_2way_multi_range_raw_5->timestamp_master_request_1, uwb_2way_multi_range_raw_5->timestamp_slave_reply, uwb_2way_multi_range_raw_5->timestamp_master_request_2);
}

/**
 * @brief Encode a uwb_2way_multi_range_raw_5 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uwb_2way_multi_range_raw_5 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uwb_2way_multi_range_raw_5_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uwb_2way_multi_range_raw_5_t* uwb_2way_multi_range_raw_5)
{
	return mavlink_msg_uwb_2way_multi_range_raw_5_pack_chan(system_id, component_id, chan, msg, uwb_2way_multi_range_raw_5->num_of_units, uwb_2way_multi_range_raw_5->address, uwb_2way_multi_range_raw_5->remote_address, uwb_2way_multi_range_raw_5->timestamp_master_request_1_recv, uwb_2way_multi_range_raw_5->timestamp_slave_reply_send, uwb_2way_multi_range_raw_5->timestamp_master_request_2_recv, uwb_2way_multi_range_raw_5->timestamp_master_request_1, uwb_2way_multi_range_raw_5->timestamp_slave_reply, uwb_2way_multi_range_raw_5->timestamp_master_request_2);
}

/**
 * @brief Send a uwb_2way_multi_range_raw_5 message
 * @param chan MAVLink channel to send the message
 *
 * @param num_of_units Number of UWB units on the tracker.
 * @param address Address of UWB tracker.
 * @param remote_address Address of remote UWB unit that was used as slave.
 * @param timestamp_master_request_1_recv Timestamp of master request 1 on slave module.
 * @param timestamp_slave_reply_send Timestamp of slave reply on slave module.
 * @param timestamp_master_request_2_recv Timestamp of master request 2 on slave module.
 * @param timestamp_master_request_1 Timestamp of master request 1 on tracker modules.
 * @param timestamp_slave_reply Timestamp of slave reply on tracker modules.
 * @param timestamp_master_request_2 Timestamp of master request 2 on tracker modules.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uwb_2way_multi_range_raw_5_send(mavlink_channel_t chan, uint8_t num_of_units, uint8_t address, uint8_t remote_address, uint64_t timestamp_master_request_1_recv, uint64_t timestamp_slave_reply_send, uint64_t timestamp_master_request_2_recv, const uint64_t *timestamp_master_request_1, const uint64_t *timestamp_slave_reply, const uint64_t *timestamp_master_request_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN];
	_mav_put_uint64_t(buf, 0, timestamp_master_request_1_recv);
	_mav_put_uint64_t(buf, 8, timestamp_slave_reply_send);
	_mav_put_uint64_t(buf, 16, timestamp_master_request_2_recv);
	_mav_put_uint8_t(buf, 144, num_of_units);
	_mav_put_uint8_t(buf, 145, address);
	_mav_put_uint8_t(buf, 146, remote_address);
	_mav_put_uint64_t_array(buf, 24, timestamp_master_request_1, 5);
	_mav_put_uint64_t_array(buf, 64, timestamp_slave_reply, 5);
	_mav_put_uint64_t_array(buf, 104, timestamp_master_request_2, 5);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5, buf, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5, buf, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN);
#endif
#else
	mavlink_uwb_2way_multi_range_raw_5_t packet;
	packet.timestamp_master_request_1_recv = timestamp_master_request_1_recv;
	packet.timestamp_slave_reply_send = timestamp_slave_reply_send;
	packet.timestamp_master_request_2_recv = timestamp_master_request_2_recv;
	packet.num_of_units = num_of_units;
	packet.address = address;
	packet.remote_address = remote_address;
	mav_array_memcpy(packet.timestamp_master_request_1, timestamp_master_request_1, sizeof(uint64_t)*5);
	mav_array_memcpy(packet.timestamp_slave_reply, timestamp_slave_reply, sizeof(uint64_t)*5);
	mav_array_memcpy(packet.timestamp_master_request_2, timestamp_master_request_2, sizeof(uint64_t)*5);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5, (const char *)&packet, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5, (const char *)&packet, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uwb_2way_multi_range_raw_5_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t num_of_units, uint8_t address, uint8_t remote_address, uint64_t timestamp_master_request_1_recv, uint64_t timestamp_slave_reply_send, uint64_t timestamp_master_request_2_recv, const uint64_t *timestamp_master_request_1, const uint64_t *timestamp_slave_reply, const uint64_t *timestamp_master_request_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, timestamp_master_request_1_recv);
	_mav_put_uint64_t(buf, 8, timestamp_slave_reply_send);
	_mav_put_uint64_t(buf, 16, timestamp_master_request_2_recv);
	_mav_put_uint8_t(buf, 144, num_of_units);
	_mav_put_uint8_t(buf, 145, address);
	_mav_put_uint8_t(buf, 146, remote_address);
	_mav_put_uint64_t_array(buf, 24, timestamp_master_request_1, 5);
	_mav_put_uint64_t_array(buf, 64, timestamp_slave_reply, 5);
	_mav_put_uint64_t_array(buf, 104, timestamp_master_request_2, 5);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5, buf, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5, buf, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN);
#endif
#else
	mavlink_uwb_2way_multi_range_raw_5_t *packet = (mavlink_uwb_2way_multi_range_raw_5_t *)msgbuf;
	packet->timestamp_master_request_1_recv = timestamp_master_request_1_recv;
	packet->timestamp_slave_reply_send = timestamp_slave_reply_send;
	packet->timestamp_master_request_2_recv = timestamp_master_request_2_recv;
	packet->num_of_units = num_of_units;
	packet->address = address;
	packet->remote_address = remote_address;
	mav_array_memcpy(packet->timestamp_master_request_1, timestamp_master_request_1, sizeof(uint64_t)*5);
	mav_array_memcpy(packet->timestamp_slave_reply, timestamp_slave_reply, sizeof(uint64_t)*5);
	mav_array_memcpy(packet->timestamp_master_request_2, timestamp_master_request_2, sizeof(uint64_t)*5);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5, (const char *)packet, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5, (const char *)packet, MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE UWB_2WAY_MULTI_RANGE_RAW_5 UNPACKING


/**
 * @brief Get field num_of_units from uwb_2way_multi_range_raw_5 message
 *
 * @return Number of UWB units on the tracker.
 */
static inline uint8_t mavlink_msg_uwb_2way_multi_range_raw_5_get_num_of_units(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  144);
}

/**
 * @brief Get field address from uwb_2way_multi_range_raw_5 message
 *
 * @return Address of UWB tracker.
 */
static inline uint8_t mavlink_msg_uwb_2way_multi_range_raw_5_get_address(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  145);
}

/**
 * @brief Get field remote_address from uwb_2way_multi_range_raw_5 message
 *
 * @return Address of remote UWB unit that was used as slave.
 */
static inline uint8_t mavlink_msg_uwb_2way_multi_range_raw_5_get_remote_address(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  146);
}

/**
 * @brief Get field timestamp_master_request_1_recv from uwb_2way_multi_range_raw_5 message
 *
 * @return Timestamp of master request 1 on slave module.
 */
static inline uint64_t mavlink_msg_uwb_2way_multi_range_raw_5_get_timestamp_master_request_1_recv(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field timestamp_slave_reply_send from uwb_2way_multi_range_raw_5 message
 *
 * @return Timestamp of slave reply on slave module.
 */
static inline uint64_t mavlink_msg_uwb_2way_multi_range_raw_5_get_timestamp_slave_reply_send(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field timestamp_master_request_2_recv from uwb_2way_multi_range_raw_5 message
 *
 * @return Timestamp of master request 2 on slave module.
 */
static inline uint64_t mavlink_msg_uwb_2way_multi_range_raw_5_get_timestamp_master_request_2_recv(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  16);
}

/**
 * @brief Get field timestamp_master_request_1 from uwb_2way_multi_range_raw_5 message
 *
 * @return Timestamp of master request 1 on tracker modules.
 */
static inline uint16_t mavlink_msg_uwb_2way_multi_range_raw_5_get_timestamp_master_request_1(const mavlink_message_t* msg, uint64_t *timestamp_master_request_1)
{
	return _MAV_RETURN_uint64_t_array(msg, timestamp_master_request_1, 5,  24);
}

/**
 * @brief Get field timestamp_slave_reply from uwb_2way_multi_range_raw_5 message
 *
 * @return Timestamp of slave reply on tracker modules.
 */
static inline uint16_t mavlink_msg_uwb_2way_multi_range_raw_5_get_timestamp_slave_reply(const mavlink_message_t* msg, uint64_t *timestamp_slave_reply)
{
	return _MAV_RETURN_uint64_t_array(msg, timestamp_slave_reply, 5,  64);
}

/**
 * @brief Get field timestamp_master_request_2 from uwb_2way_multi_range_raw_5 message
 *
 * @return Timestamp of master request 2 on tracker modules.
 */
static inline uint16_t mavlink_msg_uwb_2way_multi_range_raw_5_get_timestamp_master_request_2(const mavlink_message_t* msg, uint64_t *timestamp_master_request_2)
{
	return _MAV_RETURN_uint64_t_array(msg, timestamp_master_request_2, 5,  104);
}

/**
 * @brief Decode a uwb_2way_multi_range_raw_5 message into a struct
 *
 * @param msg The message to decode
 * @param uwb_2way_multi_range_raw_5 C-struct to decode the message contents into
 */
static inline void mavlink_msg_uwb_2way_multi_range_raw_5_decode(const mavlink_message_t* msg, mavlink_uwb_2way_multi_range_raw_5_t* uwb_2way_multi_range_raw_5)
{
#if MAVLINK_NEED_BYTE_SWAP
	uwb_2way_multi_range_raw_5->timestamp_master_request_1_recv = mavlink_msg_uwb_2way_multi_range_raw_5_get_timestamp_master_request_1_recv(msg);
	uwb_2way_multi_range_raw_5->timestamp_slave_reply_send = mavlink_msg_uwb_2way_multi_range_raw_5_get_timestamp_slave_reply_send(msg);
	uwb_2way_multi_range_raw_5->timestamp_master_request_2_recv = mavlink_msg_uwb_2way_multi_range_raw_5_get_timestamp_master_request_2_recv(msg);
	mavlink_msg_uwb_2way_multi_range_raw_5_get_timestamp_master_request_1(msg, uwb_2way_multi_range_raw_5->timestamp_master_request_1);
	mavlink_msg_uwb_2way_multi_range_raw_5_get_timestamp_slave_reply(msg, uwb_2way_multi_range_raw_5->timestamp_slave_reply);
	mavlink_msg_uwb_2way_multi_range_raw_5_get_timestamp_master_request_2(msg, uwb_2way_multi_range_raw_5->timestamp_master_request_2);
	uwb_2way_multi_range_raw_5->num_of_units = mavlink_msg_uwb_2way_multi_range_raw_5_get_num_of_units(msg);
	uwb_2way_multi_range_raw_5->address = mavlink_msg_uwb_2way_multi_range_raw_5_get_address(msg);
	uwb_2way_multi_range_raw_5->remote_address = mavlink_msg_uwb_2way_multi_range_raw_5_get_remote_address(msg);
#else
	memcpy(uwb_2way_multi_range_raw_5, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_UWB_2WAY_MULTI_RANGE_RAW_5_LEN);
#endif
}
