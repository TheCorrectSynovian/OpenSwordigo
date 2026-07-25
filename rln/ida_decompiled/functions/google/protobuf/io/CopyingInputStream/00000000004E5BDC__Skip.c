/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E5BDC
 * Mangled: _ZN6google8protobuf2io18CopyingInputStream4SkipEi
 * Demangled: google::protobuf::io::CopyingInputStream::Skip(int)
 *
 * Callers: 1
 *   0x00000000004E5BD8  google::protobuf::io::CopyingInputStream::~CopyingInputStream()
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 6
 *   insn=0x00000000004E5BF4 string=0x00000000004E5BF8 "V"
 *   insn=0x00000000004E5C20 string=0x00000000004E5C24 "?"
 *   insn=0x00000000004E5C24 string=0x00000000004E5C28 """
 *   insn=0x00000000004E5C28 string=0x00000000004E5C2C "\t@"
 *   insn=0x00000000004E5C58 string=0x00000000004E5C5C "!"
 *   insn=0x00000000004E5C80 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CopyingInputStream::Skip(
        google::protobuf::io::CopyingInputStream *this,
        int a2)
{
  int v4; // w19
  __int64 v5; // x2
  int v6; // w0
  _BYTE v8[4096]; // [xsp+8h] [xbp-1038h] BYREF
  __int64 v9; // [xsp+1008h] [xbp-38h]

  v4 = 0;
  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 >= 1 )
  {
    do
    {
      if ( a2 - v4 >= 4096 )
        v5 = 4096;
      else
        v5 = (unsigned int)(a2 - v4);
      v6 = (*(__int64 (__fastcall **)(google::protobuf::io::CopyingInputStream *, _BYTE *, __int64))(*(_QWORD *)this + 16LL))(
             this,
             v8,
             v5);
      if ( v6 <= 0 )
        break;
      v4 += v6;
    }
    while ( v4 < a2 );
  }
  return (unsigned int)v4;
}

