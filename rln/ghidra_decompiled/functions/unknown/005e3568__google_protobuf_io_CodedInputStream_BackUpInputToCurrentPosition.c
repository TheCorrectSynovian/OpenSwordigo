/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e3568
 * Function: google::protobuf::io::CodedInputStream::BackUpInputToCurrentPosition
 * Signature: undefined __thiscall BackUpInputToCurrentPosition(CodedInputStream * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::BackUpInputToCurrentPosition() */

void __thiscall
google::protobuf::io::CodedInputStream::BackUpInputToCurrentPosition(CodedInputStream *this)

{
  int iVar1;
  int iVar2;
  
                    /* try { // try from 005e3578 to 006e359f has its CatchHandler @ 005e3dd8 */
  if (0 < *(int *)(this + 0x2c) + (*(int *)(this + 0x10) - *(int *)(this + 8)) +
          *(int *)(this + 0x1c)) {
                    /* try { // try from 005e35a0 to 006e35ef has its CatchHandler @ 005e3474 */
    (**(code **)(**(long **)this + 0x18))();
    iVar1 = *(int *)(this + 0x10);
    iVar2 = *(int *)(this + 0x2c);
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
    *(int *)(this + 0x18) =
         *(int *)(this + 0x18) - (iVar2 + (iVar1 - (int)*(undefined8 *)(this + 8)));
    *(undefined4 *)(this + 0x1c) = 0;
  }
  return;
}


