/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E45D0
 * Mangled: _ZN6google8protobuf2io16CodedInputStream16ReadVarint64SlowEPm
 * Demangled: google::protobuf::io::CodedInputStream::ReadVarint64Slow(ulong *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9C30  google::protobuf::io::CodedInputStream::Refresh(void)
 *
 * Referenced strings: 8
 *   insn=0x00000000004E4600 string=0x00000000004E4614 "\t"
 *   insn=0x00000000004E4608 string=0x00000000004E460C "`"
 *   insn=0x00000000004E4608 string=0x00000000001F9C30 "0'"
 *   insn=0x00000000004E460C string=0x00000000004E4610 ""
 *   insn=0x00000000004E4618 string=0x00000000004E461C "J"
 *   insn=0x00000000004E4620 string=0x00000000004E4624 "+"
 *   insn=0x00000000004E4628 string=0x00000000004E462C "h!"
 *   insn=0x00000000004E4634 string=0x00000000004E4638 "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedInputStream::ReadVarint64Slow(
        google::protobuf::io::CodedInputStream *this,
        unsigned __int64 *a2)
{
  __int64 v4; // x22
  unsigned __int64 v5; // x21
  char *v6; // x8
  char v7; // t1
  char v8; // w10
  __int64 v9; // x11

  v4 = 0;
  v5 = 0;
  while ( v4 != 10 )
  {
    while ( 1 )
    {
      v6 = (char *)*((_QWORD *)this + 1);
      if ( v6 != *((char **)this + 2) )
        break;
      if ( (google::protobuf::io::CodedInputStream::Refresh(this) & 1) == 0 )
        return 0;
    }
    v7 = *v6;
    v8 = 7 * v4++;
    v9 = *v6 & 0x7F;
    *((_QWORD *)this + 1) = v6 + 1;
    v5 |= v9 << v8;
    if ( (v7 & 0x80) == 0 )
    {
      *a2 = v5;
      return 1;
    }
  }
  return 0;
}

