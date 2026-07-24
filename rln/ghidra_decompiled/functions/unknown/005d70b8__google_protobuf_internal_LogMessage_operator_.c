/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d70b8
 * Function: google::protobuf::internal::LogMessage::operator<<
 * Signature: undefined __thiscall operator<<(LogMessage * this, char * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::LogMessage::TEMPNAMEPLACEHOLDERVALUE(char const*) */

LogMessage * __thiscall
google::protobuf::internal::LogMessage::operator<<(LogMessage *this,char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  FUN_006677d4(this + 0x18,param_1,sVar1);
                    /* try { // try from 005d70f4 to 006d711b has its CatchHandler @ 005d7160 */
  return this;
}


