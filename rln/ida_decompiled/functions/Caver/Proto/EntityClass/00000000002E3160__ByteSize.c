/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E3160
 * Mangled: _ZNK5Caver5Proto11EntityClass8ByteSizeEv
 * Demangled: Caver::Proto::EntityClass::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001FFCF0  Caver::Proto::EntityClass::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 36
 *   insn=0x00000000002E3170 string=0x00000000002E3174 "i"
 *   insn=0x00000000002E317C string=0x00000000002E3194 "t\n@"
 *   insn=0x00000000002E3184 string=0x00000000002E3188 "#"
 *   insn=0x00000000002E3184 string=0x00000000002E31D4 "u"
 *   insn=0x00000000002E318C string=0x00000000002E3190 "3"
 *   insn=0x00000000002E3190 string=0x00000000002E325C "`\n"
 *   insn=0x00000000002E3198 string=0x00000000002E319C ""
 *   insn=0x00000000002E31A0 string=0x00000000002E31A4 "b"
 *   insn=0x00000000002E31A8 string=0x00000000002E31AC ""
 *   insn=0x00000000002E31AC string=0x00000000002E31C8 "H"
 *   insn=0x00000000002E31B0 string=0x00000000002E31B4 "L"
 *   insn=0x00000000002E31B4 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002E31B8 string=0x00000000002E31BC "i.@"
 *   insn=0x00000000002E31C0 string=0x00000000002E31C4 ""
 *   insn=0x00000000002E31CC string=0x00000000002E31D0 ")"
 *   insn=0x00000000002E31D8 string=0x00000000002E31DC ""
 *   insn=0x00000000002E31E0 string=0x00000000002E31E4 "b"
 *   insn=0x00000000002E31E8 string=0x00000000002E31EC ""
 *   insn=0x00000000002E31EC string=0x00000000002E3208 "H"
 *   insn=0x00000000002E31F8 string=0x00000000002E31FC "i.@"
 *   insn=0x00000000002E3200 string=0x00000000002E3204 ""
 *   insn=0x00000000002E3214 string=0x00000000002E3218 "?"
 *   insn=0x00000000002E321C string=0x00000000002E3220 "?"
 *   insn=0x00000000002E3220 string=0x00000000002E3224 "\n\t"
 *   insn=0x00000000002E3224 string=0x00000000002E3228 ""
 *   insn=0x00000000002E3228 string=0x00000000002E322C "?"
 *   insn=0x00000000002E322C string=0x00000000002E3230 "\n\t"
 *   insn=0x00000000002E3230 string=0x00000000002E3234 ""
 *   insn=0x00000000002E3234 string=0x00000000002E3238 "?"
 *   insn=0x00000000002E3238 string=0x00000000002E323C "\n\t"
 *   insn=0x00000000002E323C string=0x00000000002E3240 ""
 *   insn=0x00000000002E3240 string=0x00000000002E3244 "?"
 *   insn=0x00000000002E3244 string=0x00000000002E3248 "\n"
 *   insn=0x00000000002E3248 string=0x00000000002E324C ""
 *   insn=0x00000000002E324C string=0x00000000002E3250 "\n"
 *   insn=0x00000000002E3250 string=0x00000000002E3254 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityClass::ByteSize(Caver::Proto::EntityClass *this, unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w20
  __int64 result; // x0
  _QWORD *v6; // x20
  __int64 v7; // x8
  int v8; // w10
  int v9; // w0
  _QWORD *v10; // x21
  __int64 v11; // x8
  int v12; // w10
  int v13; // w0
  unsigned int v14; // w8

  LOBYTE(v3) = *((_BYTE *)this + 44);
  if ( !(_BYTE)v3 )
  {
    result = 0;
    goto LABEL_27;
  }
  if ( (*((_BYTE *)this + 44) & 1) != 0 )
  {
    v6 = (_QWORD *)*((_QWORD *)this + 2);
    v7 = *(_QWORD *)(*v6 - 24LL);
    if ( (unsigned int)v7 >= 0x80 )
    {
      v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)(unsigned int)v7,
             a2);
      v3 = *((_DWORD *)this + 11);
      v8 = v9;
      v7 = *(_QWORD *)(*v6 - 24LL);
    }
    else
    {
      v8 = 1;
    }
    v4 = v8 + v7 + 1;
    if ( (v3 & 2) == 0 )
      goto LABEL_14;
    goto LABEL_10;
  }
  v4 = 0;
  if ( (*((_BYTE *)this + 44) & 2) != 0 )
  {
LABEL_10:
    v10 = (_QWORD *)*((_QWORD *)this + 3);
    v11 = *(_QWORD *)(*v10 - 24LL);
    if ( (unsigned int)v11 >= 0x80 )
    {
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v11,
              a2);
      v3 = *((_DWORD *)this + 11);
      v12 = v13;
      v11 = *(_QWORD *)(*v10 - 24LL);
    }
    else
    {
      v12 = 1;
    }
    v4 += v12 + v11 + 1;
  }
LABEL_14:
  v14 = v4 + 2;
  if ( (v3 & 4) == 0 )
    v14 = v4;
  if ( (v3 & 8) != 0 )
    v14 += 2;
  if ( (v3 & 0x10) != 0 )
    v14 += 2;
  if ( (v3 & 0x20) != 0 )
    v14 += 2;
  if ( (v3 & 0x40) != 0 )
    v14 += 5;
  if ( (v3 & 0x80) != 0 )
    result = v14 + 5;
  else
    result = v14;
LABEL_27:
  *((_DWORD *)this + 2) = result;
  return result;
}

