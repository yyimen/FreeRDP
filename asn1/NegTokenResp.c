/*
 * Generated by asn1c-0.9.22.1409 (http://lionet.info/asn1c)
 * From ASN.1 module "SPNEGO"
 * 	found in "spnego.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy`
 */

#include <asn_internal.h>

#include "NegTokenResp.h"

static int
negState_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
negState_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
negState_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	negState_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
negState_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	negState_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
negState_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	negState_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
negState_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	negState_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
negState_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	negState_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
negState_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	negState_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_INTEGER_enum_map_t asn_MAP_negState_value2enum_2[] = {
	{ 0,	16,	"accept-completed" },
	{ 1,	17,	"accept-incomplete" },
	{ 2,	6,	"reject" },
	{ 3,	11,	"request-mic" }
};
static unsigned int asn_MAP_negState_enum2value_2[] = {
	0,	/* accept-completed(0) */
	1,	/* accept-incomplete(1) */
	2,	/* reject(2) */
	3	/* request-mic(3) */
};
static asn_INTEGER_specifics_t asn_SPC_negState_specs_2 = {
	asn_MAP_negState_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_negState_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_negState_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_negState_2 = {
	"negState",
	"negState",
	negState_2_free,
	negState_2_print,
	negState_2_constraint,
	negState_2_decode_ber,
	negState_2_encode_der,
	negState_2_decode_xer,
	negState_2_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_negState_tags_2,
	sizeof(asn_DEF_negState_tags_2)
		/sizeof(asn_DEF_negState_tags_2[0]), /* 2 */
	asn_DEF_negState_tags_2,	/* Same as above */
	sizeof(asn_DEF_negState_tags_2)
		/sizeof(asn_DEF_negState_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	&asn_SPC_negState_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NegTokenResp_1[] = {
	{ ATF_POINTER, 4, offsetof(struct NegTokenResp, negState),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_negState_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"negState"
		},
	{ ATF_POINTER, 3, offsetof(struct NegTokenResp, supportedMech),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MechType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"supportedMech"
		},
	{ ATF_POINTER, 2, offsetof(struct NegTokenResp, responseToken),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"responseToken"
		},
	{ ATF_POINTER, 1, offsetof(struct NegTokenResp, mechListMIC),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"mechListMIC"
		},
};
static ber_tlv_tag_t asn_DEF_NegTokenResp_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_NegTokenResp_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* negState at 46 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* supportedMech at 51 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* responseToken at 52 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* mechListMIC at 53 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NegTokenResp_specs_1 = {
	sizeof(struct NegTokenResp),
	offsetof(struct NegTokenResp, _asn_ctx),
	asn_MAP_NegTokenResp_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_NegTokenResp = {
	"NegTokenResp",
	"NegTokenResp",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_NegTokenResp_tags_1,
	sizeof(asn_DEF_NegTokenResp_tags_1)
		/sizeof(asn_DEF_NegTokenResp_tags_1[0]), /* 1 */
	asn_DEF_NegTokenResp_tags_1,	/* Same as above */
	sizeof(asn_DEF_NegTokenResp_tags_1)
		/sizeof(asn_DEF_NegTokenResp_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_NegTokenResp_1,
	4,	/* Elements count */
	&asn_SPC_NegTokenResp_specs_1	/* Additional specs */
};

