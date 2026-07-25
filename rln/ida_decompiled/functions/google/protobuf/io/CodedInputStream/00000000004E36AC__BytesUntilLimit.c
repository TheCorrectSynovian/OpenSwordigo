/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E36AC
 * Mangled: _ZN6google8protobuf2io16CodedInputStream15BytesUntilLimitEv
 * Demangled: google::protobuf::io::CodedInputStream::BytesUntilLimit(void)
 *
 * Callers: 1
 *   0x00000000001F67E0  google::protobuf::io::CodedInputStream::BytesUntilLimit(void)
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x00000000004E36B4 string=0x00000000004E36B8 "a"
 *   insn=0x00000000004E36B8 string=0x00000000004E36C4 ""
 *   insn=0x00000000004E36C4 string=0x00000000004E36C8 "\t"
 *   insn=0x00000000004E36C8 string=0x00000000004E36CC "\n@"
 *   insn=0x00000000004E36D0 string=0x00000000004E36D4 ""
 *   insn=0x00000000004E36D4 string=0x00000000004E36D8 ")"
 *   insn=0x00000000004E36D8 string=0x00000000004E36DC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedInputStream::BytesUntilLimit(
        google::protobuf::io::CodedInputStream *this)
{
  int v1; // w8

  v1 = *((_DWORD *)this + 10);
  if ( v1 == 0x7FFFFFFF )
    return 0xFFFFFFFFLL;
  else
    return (unsigned int)(v1
                        - *((_DWORD *)this + 6)
                        + *((_DWORD *)this + 11)
                        + *((_DWORD *)this + 4)
                        - *((_DWORD *)this + 2));
}

