/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E53C0
 * Mangled: _ZN6google8protobuf2io17CodedOutputStream12VarintSize64Em
 * Demangled: google::protobuf::io::CodedOutputStream::VarintSize64(ulong)
 *
 * Callers: 1
 *   0x00000000001F8C90  google::protobuf::io::CodedOutputStream::VarintSize64(ulong)
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x00000000004E53C4 string=0x00000000004E53D8 ""
 *   insn=0x00000000004E53DC string=0x00000000004E53F8 ""
 *   insn=0x00000000004E53FC string=0x00000000004E5418 ""
 *   insn=0x00000000004E540C string=0x00000000004E5428 ""
 *   insn=0x00000000004E5418 string=0x00000000004E541C ""
 *   insn=0x00000000004E541C string=0x00000000004E543C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedOutputStream::VarintSize64(unsigned __int64 this)
{
  if ( this >> 35 )
  {
    if ( this >> 42 )
    {
      if ( this >> 49 )
      {
        if ( HIBYTE(this) )
          return (unsigned int)(this >> 63) + 9;
        else
          return 8;
      }
      else
      {
        return 7;
      }
    }
    else
    {
      return 6;
    }
  }
  else if ( this >= 0x80 )
  {
    if ( this >= 0x4000 )
    {
      if ( this >= 0x200000 )
      {
        if ( this >> 28 )
          return 5;
        else
          return 4;
      }
      else
      {
        return 3;
      }
    }
    else
    {
      return 2;
    }
  }
  else
  {
    return 1;
  }
}

