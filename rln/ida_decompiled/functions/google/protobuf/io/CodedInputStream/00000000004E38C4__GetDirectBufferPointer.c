/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E38C4
 * Mangled: _ZN6google8protobuf2io16CodedInputStream22GetDirectBufferPointerEPPKvPi
 * Demangled: google::protobuf::io::CodedInputStream::GetDirectBufferPointer(void const**,int *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9C30  google::protobuf::io::CodedInputStream::Refresh(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000004E38E4 string=0x00000000004E38E8 "?"
 *   insn=0x00000000004E38F4 string=0x00000000004E38F8 " "
 *   insn=0x00000000004E38F4 string=0x00000000001F9C30 "0'"
 *   insn=0x00000000004E390C string=0x00000000004E3910 ""
 *   insn=0x00000000004E3910 string=0x00000000004E3914 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedInputStream::GetDirectBufferPointer(
        google::protobuf::io::CodedInputStream *this,
        const void **a2,
        int *a3)
{
  const void *v4; // x8
  __int64 result; // x0

  v4 = (const void *)*((_QWORD *)this + 1);
  if ( *((_DWORD *)this + 4) != (_DWORD)v4 )
    goto LABEL_4;
  if ( (google::protobuf::io::CodedInputStream::Refresh(this) & 1) != 0 )
  {
    v4 = (const void *)*((_QWORD *)this + 1);
LABEL_4:
    *a2 = v4;
    result = 1;
    *a3 = *((_DWORD *)this + 4) - *((_DWORD *)this + 2);
    return result;
  }
  return 0;
}

