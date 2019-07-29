/** @file interface_mac_rlc.h
 *
 *  @brief
 *  @author bo.liu
 *  @date   2019/07/29
 *  COPYRIGHT NOTICE: (c) smartlogictech.
 *  All rights reserved.
 */

#ifndef INC_INTERFACE_MAC_RLC_H_
#define INC_INTERFACE_MAC_RLC_H_

#include <typedef.h>

/**MAC_RLC_BUF_STATUS_REQ**/
typedef struct mac_rlc_buf_status_req_s
{
	uint8_t logicchannel_id;
	uint8_t sub_sfn;  /**subsfn number*/
	uint16_t sfn;     /**sfn number*/

	uint16_t rlc_entity_type; /**1:TM;2:UM; 3:AM */
	uint16_t pad;
}mac_rlc_buf_status_req;

typedef struct rlc_mac_buf_status_rpt_s
{
	uint8_t logicchannel_id;
	uint8_t sub_sfn;  /**subsfn number*/
	uint16_t sfn;     /**sfn number*/

	uint16_t rlc_entity_type; /**1:TM;2:UM; 3:AM */
	uint16_t pad;

	uint32_t buffer_byte_size;  /**unit:byte*/
}rlc_mac_buf_status_rpt;

/**MAC_RLC_DATA_REQ */
typedef struct mac_rlc_data_req_s
{
	uint8_t logicchannel_id;
	uint8_t sub_sfn;  /**subsfn number*/
	uint16_t sfn;     /**sfn number*/

	uint32_t mac_pdu_byte_size ; /**PDU size ,unit:byte*/
}mac_rlc_data_req;

/**RLC_MAC_DATA_IND**/
typedef struct rlc_mac_data_ind_s
{
	uint8_t rlc_entity_type; /**1：tm.2:um.3:am*/
	uint8_t rb_id;
	uint8_t logicchannel_id;
	uint8_t pad;

	uint16_t sfn;
	uint8_t  sub_sfn;
	uint8_t  pad2;

	uint32_t tb_byte_size; /**unit:byte*/
	uint32_t *data_buffer_adder_ptr;  /**mac buffer address*/
}rlc_mac_data_ind;




/**MAC_RLC_DATA_RPT*/
typedef struct mac_rlc_data_rpt_s
{
	uint8_t logicchannel_id;
	uint8_t sub_sfn;  /**subsfn number*/
	uint16_t sfn;     /**sfn number*/

	uint32_t mac_pdu_size ; /**PDU size ,unit:byte*/
    uint32_t *mac_pdu_buffer_ptr; /**PDU buffer address */
}mac_rlc_data_rpt;



#endif /* INC_INTERFACE_MAC_RLC_H_ */
