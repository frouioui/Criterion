/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.5-dev at Thu Dec 10 20:30:59 2015. */

#ifndef PB_CRITERION_PB_H_INCLUDED
#define PB_CRITERION_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _criterion_protocol_death_result_type {
    criterion_protocol_death_result_type_NORMAL = 0,
    criterion_protocol_death_result_type_CRASH = 1,
    criterion_protocol_death_result_type_TIMEOUT = 2
} criterion_protocol_death_result_type;

/* Struct definitions */
typedef struct _criterion_protocol_birth {
    uint8_t dummy_field;
} criterion_protocol_birth;

typedef struct _criterion_protocol_post_fini {
    uint8_t dummy_field;
} criterion_protocol_post_fini;

typedef struct _criterion_protocol_pre_init {
    uint8_t dummy_field;
} criterion_protocol_pre_init;

typedef struct _criterion_protocol_assert {
    pb_callback_t message;
    bool passed;
    pb_callback_t file;
    bool has_line;
    int64_t line;
} criterion_protocol_assert;

typedef struct _criterion_protocol_death {
    bool has_result;
    criterion_protocol_death_result_type result;
    bool has_status;
    int64_t status;
} criterion_protocol_death;

typedef struct _criterion_protocol_msg_mid {
    bool has_pid;
    int64_t pid;
} criterion_protocol_msg_mid;

typedef struct _criterion_protocol_post_test {
    bool has_timestamp;
    int64_t timestamp;
} criterion_protocol_post_test;

typedef struct _criterion_protocol_pre_test {
    bool has_timestamp;
    int64_t timestamp;
} criterion_protocol_pre_test;

typedef struct _criterion_protocol_msg {
    int32_t version;
    criterion_protocol_msg_mid id;
    pb_extension_t *extensions;
} criterion_protocol_msg;

/* Extensions */
extern const pb_extension_type_t criterion_protocol_birth_data; /* field type: criterion_protocol_birth data; */
extern const pb_extension_type_t criterion_protocol_pre_init_data; /* field type: criterion_protocol_pre_init data; */
extern const pb_extension_type_t criterion_protocol_pre_test_data; /* field type: criterion_protocol_pre_test data; */
extern const pb_extension_type_t criterion_protocol_post_test_data; /* field type: criterion_protocol_post_test data; */
extern const pb_extension_type_t criterion_protocol_post_fini_data; /* field type: criterion_protocol_post_fini data; */
extern const pb_extension_type_t criterion_protocol_death_data; /* field type: criterion_protocol_death data; */
extern const pb_extension_type_t criterion_protocol_assert_data; /* field type: criterion_protocol_assert data; */

/* Default values for struct fields */
extern const int32_t criterion_protocol_msg_version_default;

/* Initializer values for message structs */
#define criterion_protocol_msg_init_default      {1, criterion_protocol_msg_mid_init_default, NULL}
#define criterion_protocol_msg_mid_init_default  {false, 0}
#define criterion_protocol_birth_init_default    {0}
#define criterion_protocol_pre_init_init_default {0}
#define criterion_protocol_pre_test_init_default {false, 0}
#define criterion_protocol_post_test_init_default {false, 0}
#define criterion_protocol_post_fini_init_default {0}
#define criterion_protocol_death_init_default    {false, (criterion_protocol_death_result_type)0, false, 0}
#define criterion_protocol_assert_init_default   {{{NULL}, NULL}, 0, {{NULL}, NULL}, false, 0}
#define criterion_protocol_msg_init_zero         {0, criterion_protocol_msg_mid_init_zero, NULL}
#define criterion_protocol_msg_mid_init_zero     {false, 0}
#define criterion_protocol_birth_init_zero       {0}
#define criterion_protocol_pre_init_init_zero    {0}
#define criterion_protocol_pre_test_init_zero    {false, 0}
#define criterion_protocol_post_test_init_zero   {false, 0}
#define criterion_protocol_post_fini_init_zero   {0}
#define criterion_protocol_death_init_zero       {false, (criterion_protocol_death_result_type)0, false, 0}
#define criterion_protocol_assert_init_zero      {{{NULL}, NULL}, 0, {{NULL}, NULL}, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define criterion_protocol_assert_message_tag    1
#define criterion_protocol_assert_passed_tag     2
#define criterion_protocol_assert_file_tag       3
#define criterion_protocol_assert_line_tag       4
#define criterion_protocol_death_result_tag      1
#define criterion_protocol_death_status_tag      2
#define criterion_protocol_msg_mid_pid_tag       1
#define criterion_protocol_post_test_timestamp_tag 1
#define criterion_protocol_pre_test_timestamp_tag 1
#define criterion_protocol_msg_version_tag       1
#define criterion_protocol_msg_id_tag            2
#define criterion_protocol_birth_data_tag        100
#define criterion_protocol_pre_init_data_tag     101
#define criterion_protocol_pre_test_data_tag     102
#define criterion_protocol_post_test_data_tag    103
#define criterion_protocol_post_fini_data_tag    104
#define criterion_protocol_death_data_tag        105
#define criterion_protocol_assert_data_tag       106

/* Struct field encoding specification for nanopb */
extern const pb_field_t criterion_protocol_msg_fields[4];
extern const pb_field_t criterion_protocol_msg_mid_fields[2];
extern const pb_field_t criterion_protocol_birth_fields[1];
extern const pb_field_t criterion_protocol_pre_init_fields[1];
extern const pb_field_t criterion_protocol_pre_test_fields[2];
extern const pb_field_t criterion_protocol_post_test_fields[2];
extern const pb_field_t criterion_protocol_post_fini_fields[1];
extern const pb_field_t criterion_protocol_death_fields[3];
extern const pb_field_t criterion_protocol_assert_fields[5];

/* Maximum encoded size of messages (where known) */
#define criterion_protocol_msg_size              24
#define criterion_protocol_msg_mid_size          11
#define criterion_protocol_birth_size            0
#define criterion_protocol_pre_init_size         0
#define criterion_protocol_pre_test_size         11
#define criterion_protocol_post_test_size        11
#define criterion_protocol_post_fini_size        0
#define criterion_protocol_death_size            13

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define CRITERION_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
