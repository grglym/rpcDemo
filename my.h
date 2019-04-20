/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _MY_H_RPCGEN
#define _MY_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct my_io_data_s {
	int mtype;
	int len;
	char data[1024];
};
typedef struct my_io_data_s my_io_data_s;

typedef my_io_data_s my_io_data_t;

#define MY_RPC_PROG 0x38000010
#define MY_RPC_VERS1 1

#if defined(__STDC__) || defined(__cplusplus)
#define MY_RPCC 1
extern  int * my_rpcc_1(my_io_data_t *, CLIENT *);
extern  int * my_rpcc_1_svc(my_io_data_t *, struct svc_req *);
extern int my_rpc_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define MY_RPCC 1
extern  int * my_rpcc_1();
extern  int * my_rpcc_1_svc();
extern int my_rpc_prog_1_freeresult ();
#endif /* K&R C */
#define MY_RPC_VERS2 2

#if defined(__STDC__) || defined(__cplusplus)
extern  my_io_data_t * my_rpcc_2(my_io_data_t *, CLIENT *);
extern  my_io_data_t * my_rpcc_2_svc(my_io_data_t *, struct svc_req *);
extern int my_rpc_prog_2_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
extern  my_io_data_t * my_rpcc_2();
extern  my_io_data_t * my_rpcc_2_svc();
extern int my_rpc_prog_2_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_my_io_data_s (XDR *, my_io_data_s*);
extern  bool_t xdr_my_io_data_t (XDR *, my_io_data_t*);

#else /* K&R C */
extern bool_t xdr_my_io_data_s ();
extern bool_t xdr_my_io_data_t ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_MY_H_RPCGEN */