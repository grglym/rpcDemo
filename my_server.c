/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "my.h"
#include "rpc_msg.h"



int *
my_rpcc_1_svc(my_io_data_t *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
        switch(argp->mtype)
        {
	    case RPC_enable:
            printf("server start!\n");
            break;
            
            case RPC_disable:
            printf("server close!\n");
            break;
            
            default:
            break;
        }
	return &result;
}

my_io_data_t *
my_rpcc_2_svc(my_io_data_t *argp, struct svc_req *rqstp)
{
	static my_io_data_t  result;
        my_msg_t* out = (my_msg_t*) &result;
        my_msg_t* in = (my_msg_t*) argp;

        switch(in->msg_hdr.mtype)
        {
            case RPC_ADD:
            out->result = in->para1 + in->para2;
            break;

            case RPC_SUB:
            out->result = in->para1 - in->para2;
            break;

            case RPC_MUL:
            out->result = in->para1 * in->para2;
            break;
           
            case RPC_DIV:
            out->result = in->para1 / in->para2;
            break;

            default:
            break;
        }
	/*
	 * insert server code here
	 */
        //printf("recv msg from client! len:%d, mtype:%d \n",argp->len,argp->mtype);
        //result.mtype = 33;
        //result.len = 12;
	return &result;
}
