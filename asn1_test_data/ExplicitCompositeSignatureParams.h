/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "COMPOSITESIGALGS"
 * 	found in "pqASN1_compiling.asn"
 */

#ifndef	_ExplicitCompositeSignatureParams_H_
#define	_ExplicitCompositeSignatureParams_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ANY.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ExplicitCompositeSignatureParams */
typedef struct ExplicitCompositeSignatureParams {
	ANY_t	 firstAlgorithmParams;
	ANY_t	 secondAlgorithmParams;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ExplicitCompositeSignatureParams_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ExplicitCompositeSignatureParams;

#ifdef __cplusplus
}
#endif

#endif	/* _ExplicitCompositeSignatureParams_H_ */
#include <asn_internal.h>
