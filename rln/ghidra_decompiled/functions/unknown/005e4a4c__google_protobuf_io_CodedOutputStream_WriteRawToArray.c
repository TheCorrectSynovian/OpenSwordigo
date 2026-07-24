/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e4a4c
 * Function: google::protobuf::io::CodedOutputStream::WriteRawToArray
 * Signature: undefined __cdecl WriteRawToArray(void * param_1, int param_2, uchar * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedOutputStream::WriteRawToArray(void const*, int, unsigned char*) */

uchar * google::protobuf::io::CodedOutputStream::WriteRawToArray
                  (void *param_1,int param_2,uchar *param_3)

{
  memcpy(param_3,param_1,(long)param_2);
  return param_3 + param_2;
}


