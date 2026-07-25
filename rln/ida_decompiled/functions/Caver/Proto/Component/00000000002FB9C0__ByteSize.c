/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FB9C0
 * Mangled: _ZNK5Caver5Proto9Component8ByteSizeEv
 * Demangled: Caver::Proto::Component::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002024E0  Caver::Proto::Component::ByteSize(void)
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F6E60  google::protobuf::internal::ExtensionSet::ByteSize(void)
 *
 * Referenced strings: 37
 *   insn=0x00000000002FB9D0 string=0x00000000002FB9D4 "ibA9I"
 *   insn=0x00000000002FB9D4 string=0x00000000002FB9D8 "I"
 *   insn=0x00000000002FB9D8 string=0x00000000002FB9DC "i"
 *   insn=0x00000000002FB9DC string=0x00000000002FBA08 "t"@"
 *   insn=0x00000000002FB9E0 string=0x00000000002FB9E4 "\t"
 *   insn=0x00000000002FB9E4 string=0x00000000002FB9E8 "`J@"
 *   insn=0x00000000002FB9E4 string=0x00000000002FBA64 "i"
 *   insn=0x00000000002FB9EC string=0x00000000002FBA4C "h"
 *   insn=0x00000000002FBA00 string=0x00000000002FBA04 ";"
 *   insn=0x00000000002FBA04 string=0x00000000002FBAF0 "`""
 *   insn=0x00000000002FBA0C string=0x00000000002FBA10 ""
 *   insn=0x00000000002FBA14 string=0x00000000002FBA18 "b"
 *   insn=0x00000000002FBA1C string=0x00000000002FBA20 ""
 *   insn=0x00000000002FBA20 string=0x00000000002FBA3C "H"
 *   insn=0x00000000002FBA28 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002FBA2C string=0x00000000002FBA30 "iZ@"
 *   insn=0x00000000002FBA34 string=0x00000000002FBA38 ""
 *   insn=0x00000000002FBA40 string=0x00000000002FBA44 ")"
 *   insn=0x00000000002FBA44 string=0x00000000002FBA48 ""
 *   insn=0x00000000002FBA54 string=0x00000000002FBA58 "iZ@"
 *   insn=0x00000000002FBA58 string=0x00000000002FBA5C ""
 *   insn=0x00000000002FBA64 string=0x00000000002FBA68 "i"
 *   insn=0x00000000002FBA64 string=0x00000000002FBA70 "`N@"
 *   insn=0x00000000002FBA68 string=0x00000000002FBA6C "!"
 *   insn=0x00000000002FBA68 string=0x00000000002FBAB4 "u*@"
 *   insn=0x00000000002FBA74 string=0x00000000002FBA90 "h"
 *   insn=0x00000000002FBA78 string=0x00000000002FBA7C """
 *   insn=0x00000000002FBA84 string=0x00000000002FBA88 "i"
 *   insn=0x00000000002FBAA0 string=0x00000000002FBAA4 "iZ@"
 *   insn=0x00000000002FBAA4 string=0x00000000002FBAA8 ""
 *   insn=0x00000000002FBAAC string=0x00000000002FBAB0 "\t"
 *   insn=0x00000000002FBAB8 string=0x00000000002FBABC ""
 *   insn=0x00000000002FBAC0 string=0x00000000002FBAC4 "b"
 *   insn=0x00000000002FBACC string=0x00000000002FBAE4 "("
 *   insn=0x00000000002FBADC string=0x00000000002FBAE0 ""
 *   insn=0x00000000002FBAF4 string=0x00000000001F6E60 "0'"
 *   insn=0x00000000002FBAF8 string=0x00000000002FBAFC "`:"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Component::ByteSize(Caver::Proto::Component *this, unsigned int a2)
{
  int v3; // w9
  int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w8
  _QWORD *v7; // x20
  __int64 v8; // x8
  int v9; // w10
  int v10; // w0
  int v11; // w0
  google::protobuf::io::CodedOutputStream *v12; // x0
  _QWORD *v13; // x21
  __int64 v14; // x8
  int v15; // w9
  __int64 result; // x0

  LOBYTE(v3) = *((_BYTE *)this + 88);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_30;
  }
  if ( (*((_BYTE *)this + 88) & 1) != 0 )
  {
    v7 = (_QWORD *)*((_QWORD *)this + 8);
    v8 = *(_QWORD *)(*v7 - 24LL);
    if ( (unsigned int)v8 >= 0x80 )
    {
      v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v8,
              a2);
      v3 = *((_DWORD *)this + 22);
      v9 = v10;
      v8 = *(_QWORD *)(*v7 - 24LL);
    }
    else
    {
      v9 = 1;
    }
    v4 = v9 + v8 + 1;
    if ( (v3 & 2) == 0 )
      goto LABEL_16;
    goto LABEL_4;
  }
  v4 = 0;
  if ( (*((_BYTE *)this + 88) & 2) != 0 )
  {
LABEL_4:
    v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 18);
    if ( ((unsigned int)v5 & 0x80000000) != 0 )
    {
      v6 = 11;
    }
    else if ( (unsigned int)v5 >= 0x80 )
    {
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
      v3 = *((_DWORD *)this + 22);
      v6 = v11 + 1;
    }
    else
    {
      v6 = 2;
    }
    v4 += v6;
  }
LABEL_16:
  if ( (v3 & 4) != 0 )
  {
    v12 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 19);
    if ( ((unsigned int)v12 & 0x80000000) != 0 )
    {
      v4 += 11;
      if ( (v3 & 8) == 0 )
        goto LABEL_30;
    }
    else if ( (unsigned int)v12 >= 0x80 )
    {
      v4 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v12, a2) + 1;
      if ( (*((_DWORD *)this + 22) & 8) == 0 )
        goto LABEL_30;
    }
    else
    {
      v4 += 2;
      if ( (v3 & 8) == 0 )
        goto LABEL_30;
    }
  }
  else if ( (v3 & 8) == 0 )
  {
    goto LABEL_30;
  }
  v13 = (_QWORD *)*((_QWORD *)this + 10);
  v14 = *(_QWORD *)(*v13 - 24LL);
  if ( (unsigned int)v14 >= 0x80 )
  {
    v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v14,
            a2);
    v14 = *(_QWORD *)(*v13 - 24LL);
  }
  else
  {
    v15 = 1;
  }
  v4 += v15 + v14 + 1;
LABEL_30:
  result = (unsigned int)google::protobuf::internal::ExtensionSet::ByteSize((Caver::Proto::Component *)((char *)this + 8))
         + v4;
  *((_DWORD *)this + 14) = result;
  return result;
}

