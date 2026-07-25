/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D7344
 * Mangled: _ZNK5Caver5Proto13GUIViewLayout8ByteSizeEv
 * Demangled: Caver::Proto::GUIViewLayout::ByteSize(void)
 *
 * Callers: 2
 *   0x0000000000200D30  Caver::Proto::GUIViewLayout::ByteSize(void)
 *   0x00000000002D7344  Caver::Proto::GUIViewLayout::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 46
 *   insn=0x00000000002D7354 string=0x00000000002D7358 "ibA9"
 *   insn=0x00000000002D7360 string=0x00000000002D7378 "t\n@"
 *   insn=0x00000000002D7368 string=0x00000000002D736C "+"
 *   insn=0x00000000002D7368 string=0x00000000002D73B8 "j "
 *   insn=0x00000000002D736C string=0x00000000002D7418 "i"@"
 *   insn=0x00000000002D7370 string=0x00000000002D7374 ")"
 *   insn=0x00000000002D737C string=0x00000000002D7380 ""
 *   insn=0x00000000002D7384 string=0x00000000002D7388 "b"
 *   insn=0x00000000002D738C string=0x00000000002D7390 ""
 *   insn=0x00000000002D7390 string=0x00000000002D73AC "H"
 *   insn=0x00000000002D7398 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002D739C string=0x00000000002D73A0 "iZ@"
 *   insn=0x00000000002D73A4 string=0x00000000002D73A8 ""
 *   insn=0x00000000002D73AC string=0x00000000002D73B0 ""
 *   insn=0x00000000002D73B0 string=0x00000000002D73B4 ")"
 *   insn=0x00000000002D73B8 string=0x00000000002D73BC "i*@"
 *   insn=0x00000000002D73BC string=0x00000000002D73C0 "J"
 *   insn=0x00000000002D73C0 string=0x00000000002D73C4 "?"
 *   insn=0x00000000002D73C4 string=0x00000000002D73C8 "J"
 *   insn=0x00000000002D73C8 string=0x00000000002D73CC "I"
 *   insn=0x00000000002D73CC string=0x00000000002D73D0 "))@"
 *   insn=0x00000000002D73D0 string=0x00000000002D73D4 "*q@9"
 *   insn=0x00000000002D73D8 string=0x00000000002D73DC "K"
 *   insn=0x00000000002D73D8 string=0x00000000002D740C ""
 *   insn=0x00000000002D73E0 string=0x00000000002D73E4 "k"
 *   insn=0x00000000002D73E4 string=0x00000000002D73E8 "_"
 *   insn=0x00000000002D73E8 string=0x00000000002D73EC "l"
 *   insn=0x00000000002D73EC string=0x00000000002D73F0 "k"
 *   insn=0x00000000002D73F0 string=0x00000000002D73F4 "_"
 *   insn=0x00000000002D73F4 string=0x00000000002D73F8 "l"
 *   insn=0x00000000002D73F8 string=0x00000000002D73FC "k"
 *   insn=0x00000000002D73FC string=0x00000000002D7400 "l"
 *   insn=0x00000000002D7400 string=0x00000000002D7404 "_"
 *   insn=0x00000000002D7404 string=0x00000000002D7408 "j"
 *   insn=0x00000000002D740C string=0x00000000002D7410 "\t"
 *   insn=0x00000000002D7410 string=0x00000000002D7414 "*\t"
 *   insn=0x00000000002D7418 string=0x00000000002D741C "?"
 *   insn=0x00000000002D741C string=0x00000000002D7420 "4"
 *   insn=0x00000000002D7420 string=0x00000000002D7424 "K"
 *   insn=0x00000000002D7424 string=0x00000000002D746C "t\n"
 *   insn=0x00000000002D7428 string=0x00000000002D742C "h"
 *   insn=0x00000000002D743C string=0x00000000002D7440 "b"
 *   insn=0x00000000002D7448 string=0x00000000002D7454 "h""
 *   insn=0x00000000002D744C string=0x00000000002D7450 "`{"
 *   insn=0x00000000002D745C string=0x00000000002D7460 "4"
 *   insn=0x00000000002D7464 string=0x00000000002D7468 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GUIViewLayout::ByteSize(Caver::Proto::GUIViewLayout *this, unsigned int a2)
{
  int v3; // w9
  int v4; // w8
  _QWORD *v5; // x20
  __int64 v6; // x8
  int v7; // w10
  int v8; // w0
  Caver::Proto::GUIViewLayout *v9; // x9
  __int64 v10; // x9
  int v11; // w10
  int v12; // w11
  int v13; // w9
  unsigned int v14; // w20
  __int64 v15; // x22
  unsigned int v16; // w1
  unsigned int v17; // w21
  int v18; // w0

  LOBYTE(v3) = *((_BYTE *)this + 88);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_22;
  }
  if ( (*((_BYTE *)this + 88) & 1) != 0 )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 2);
    v6 = *(_QWORD *)(*v5 - 24LL);
    if ( (unsigned int)v6 >= 0x80 )
    {
      v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)(unsigned int)v6,
             a2);
      v3 = *((_DWORD *)this + 22);
      v7 = v8;
      v6 = *(_QWORD *)(*v5 - 24LL);
    }
    else
    {
      v7 = 1;
    }
    v4 = v7 + v6 + 1;
    if ( (v3 & 4) == 0 )
      goto LABEL_22;
  }
  else
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 88) & 4) == 0 )
      goto LABEL_22;
  }
  if ( *((_QWORD *)this + 10) )
    v9 = this;
  else
    v9 = (Caver::Proto::GUIViewLayout *)Caver::Proto::GUIViewLayout::default_instance_;
  v10 = *((_QWORD *)v9 + 10);
  v11 = *(unsigned __int8 *)(v10 + 28);
  if ( *(_BYTE *)(v10 + 28) )
  {
    v12 = (v11 << 31 >> 31) & 5;
    if ( (v11 & 2) != 0 )
      v12 += 5;
    if ( (v11 & 4) != 0 )
      v12 += 5;
    if ( (v11 & 8) != 0 )
      v11 = v12 + 5;
    else
      v11 = v12;
  }
  v4 += v11 + 2;
  *(_DWORD *)(v10 + 8) = v11;
LABEL_22:
  v13 = *((_DWORD *)this + 8);
  v14 = v13 + v4;
  if ( v13 >= 1 )
  {
    v15 = 0;
    do
    {
      v17 = Caver::Proto::GUIViewLayout::ByteSize(*(Caver::Proto::GUIViewLayout **)(*((_QWORD *)this + 3) + 8 * v15));
      if ( v17 >= 0x80 )
        v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v17,
                v16);
      else
        v18 = 1;
      ++v15;
      v14 += v17 + v18;
    }
    while ( v15 < *((int *)this + 8) );
  }
  *((_DWORD *)this + 2) = v14;
  return v14;
}

