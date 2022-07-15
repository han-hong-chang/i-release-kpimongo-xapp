/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm-kpm-v01.02.asn"
 * 	`asn1c -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "OCUCP-PF-Container.h"

static int
memb_numberOfActive_UEs_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 65536)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_numberOfActive_UEs_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_numberOfActive_UEs_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  16, -1,  1,  65536 }	/* (1..65536,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_cu_CP_Resource_Status_3[] = {
	{ ATF_POINTER, 1, offsetof(struct OCUCP_PF_Container__cu_CP_Resource_Status, numberOfActive_UEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_numberOfActive_UEs_constr_4, &asn_PER_memb_numberOfActive_UEs_constr_4,  memb_numberOfActive_UEs_constraint_3 },
		0, 0, /* No default value */
		"numberOfActive-UEs"
		},
};
static const int asn_MAP_cu_CP_Resource_Status_oms_3[] = { 0 };
static const ber_tlv_tag_t asn_DEF_cu_CP_Resource_Status_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cu_CP_Resource_Status_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* numberOfActive-UEs */
};
static asn_SEQUENCE_specifics_t asn_SPC_cu_CP_Resource_Status_specs_3 = {
	sizeof(struct OCUCP_PF_Container__cu_CP_Resource_Status),
	offsetof(struct OCUCP_PF_Container__cu_CP_Resource_Status, _asn_ctx),
	asn_MAP_cu_CP_Resource_Status_tag2el_3,
	1,	/* Count of tags in the map */
	asn_MAP_cu_CP_Resource_Status_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cu_CP_Resource_Status_3 = {
	"cu-CP-Resource-Status",
	"cu-CP-Resource-Status",
	&asn_OP_SEQUENCE,
	asn_DEF_cu_CP_Resource_Status_tags_3,
	sizeof(asn_DEF_cu_CP_Resource_Status_tags_3)
		/sizeof(asn_DEF_cu_CP_Resource_Status_tags_3[0]) - 1, /* 1 */
	asn_DEF_cu_CP_Resource_Status_tags_3,	/* Same as above */
	sizeof(asn_DEF_cu_CP_Resource_Status_tags_3)
		/sizeof(asn_DEF_cu_CP_Resource_Status_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cu_CP_Resource_Status_3,
	1,	/* Elements count */
	&asn_SPC_cu_CP_Resource_Status_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_OCUCP_PF_Container_1[] = {
	{ ATF_POINTER, 1, offsetof(struct OCUCP_PF_Container, gNB_CU_CP_Name),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNB_CU_CP_Name,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gNB-CU-CP-Name"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OCUCP_PF_Container, cu_CP_Resource_Status),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cu_CP_Resource_Status_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cu-CP-Resource-Status"
		},
};
static const int asn_MAP_OCUCP_PF_Container_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_OCUCP_PF_Container_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_OCUCP_PF_Container_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gNB-CU-CP-Name */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cu-CP-Resource-Status */
};
asn_SEQUENCE_specifics_t asn_SPC_OCUCP_PF_Container_specs_1 = {
	sizeof(struct OCUCP_PF_Container),
	offsetof(struct OCUCP_PF_Container, _asn_ctx),
	asn_MAP_OCUCP_PF_Container_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_OCUCP_PF_Container_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_OCUCP_PF_Container = {
	"OCUCP-PF-Container",
	"OCUCP-PF-Container",
	&asn_OP_SEQUENCE,
	asn_DEF_OCUCP_PF_Container_tags_1,
	sizeof(asn_DEF_OCUCP_PF_Container_tags_1)
		/sizeof(asn_DEF_OCUCP_PF_Container_tags_1[0]), /* 1 */
	asn_DEF_OCUCP_PF_Container_tags_1,	/* Same as above */
	sizeof(asn_DEF_OCUCP_PF_Container_tags_1)
		/sizeof(asn_DEF_OCUCP_PF_Container_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_OCUCP_PF_Container_1,
	2,	/* Elements count */
	&asn_SPC_OCUCP_PF_Container_specs_1	/* Additional specs */
};

