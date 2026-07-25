/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E3568
 * Mangled: _ZN6google8protobuf2io16CodedInputStream28BackUpInputToCurrentPositionEv
 * Demangled: google::protobuf::io::CodedInputStream::BackUpInputToCurrentPosition(void)
 *
 * Callers: 1
 *   0x00000000002028D0  google::protobuf::io::CodedInputStream::BackUpInputToCurrentPosition(void)
 *
 * Callees: 0
 *
 * Referenced strings: 19
 *   insn=0x00000000004E3574 string=0x00000000004E3578 "h"
 *   insn=0x00000000004E3578 string=0x00000000004E357C "i\n@"
 *   insn=0x00000000004E357C string=0x00000000004E3580 "j.@"
 *   insn=0x00000000004E3580 string=0x00000000004E3584 "k"
 *   insn=0x00000000004E3584 string=0x00000000004E3588 ""
 *   insn=0x00000000004E3588 string=0x00000000004E358C "H"
 *   insn=0x00000000004E3590 string=0x00000000004E3594 "?"
 *   insn=0x00000000004E3598 string=0x00000000004E359C "`"
 *   insn=0x00000000004E359C string=0x00000000004E35A0 ""
 *   insn=0x00000000004E35A0 string=0x00000000004E35A4 "@"
 *   insn=0x00000000004E35A8 string=0x00000000004E35AC "h"
 *   insn=0x00000000004E35AC string=0x00000000004E35B0 "i"
 *   insn=0x00000000004E35B0 string=0x00000000004E35B4 "j.@"
 *   insn=0x00000000004E35B4 string=0x00000000004E35B8 "k"
 *   insn=0x00000000004E35BC string=0x00000000004E35C0 ""
 *   insn=0x00000000004E35C0 string=0x00000000004E35C4 "H"
 *   insn=0x00000000004E35C4 string=0x00000000004E35C8 "h"
 *   insn=0x00000000004E35C8 string=0x00000000004E35CC "i\n"
 *   insn=0x00000000004E35CC string=0x00000000004E35D0 "h~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall google::protobuf::io::CodedInputStream::BackUpInputToCurrentPosition(_DWORD *this)
{
  _DWORD *v1; // x19
  int v2; // w8
  __int64 v3; // x9
  int v4; // w10
  int v5; // w11

  v1 = this;
  if ( this[11] + this[4] - this[2] + this[7] >= 1 )
  {
    this = (_DWORD *)(*(__int64 (**)(void))(**(_QWORD **)this + 24LL))();
    v2 = v1[4];
    v3 = *((_QWORD *)v1 + 1);
    v4 = v1[11];
    v5 = v1[6];
    v1[11] = 0;
    *((_QWORD *)v1 + 2) = v3;
    *((_QWORD *)v1 + 3) = (unsigned int)(v5 - (v4 + v2 - v3));
  }
  return this;
}

