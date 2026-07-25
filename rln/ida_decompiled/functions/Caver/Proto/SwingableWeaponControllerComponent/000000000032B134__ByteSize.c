/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032B134
 * Mangled: _ZNK5Caver5Proto34SwingableWeaponControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::SwingableWeaponControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 24
 *   insn=0x000000000032B144 string=0x000000000032B148 "i"
 *   insn=0x000000000032B150 string=0x000000000032B168 "`"
 *   insn=0x000000000032B154 string=0x000000000032B158 "I"
 *   insn=0x000000000032B158 string=0x000000000032B15C "!"
 *   insn=0x000000000032B158 string=0x000000000032B1A0 "u\n@"
 *   insn=0x000000000032B15C string=0x000000000032B1E0 "\t"
 *   insn=0x000000000032B160 string=0x000000000032B164 "/"
 *   insn=0x000000000032B164 string=0x000000000032B220 "t\n"
 *   insn=0x000000000032B16C string=0x000000000032B184 "t"
 *   insn=0x000000000032B178 string=0x000000000032B17C ")"
 *   insn=0x000000000032B190 string=0x000000000032B194 "i"@"
 *   insn=0x000000000032B190 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000032B198 string=0x000000000032B19C ")"
 *   insn=0x000000000032B1A4 string=0x000000000032B1A8 ""
 *   insn=0x000000000032B1AC string=0x000000000032B1B0 "b"
 *   insn=0x000000000032B1B4 string=0x000000000032B1B8 ""
 *   insn=0x000000000032B1B8 string=0x000000000032B1D4 "H"
 *   insn=0x000000000032B1C4 string=0x000000000032B1C8 "i"@"
 *   insn=0x000000000032B1CC string=0x000000000032B1D0 ""
 *   insn=0x000000000032B1E0 string=0x000000000032B1E4 "u"
 *   insn=0x000000000032B1E8 string=0x000000000032B1EC ""
 *   insn=0x000000000032B1F0 string=0x000000000032B1F4 "b"
 *   insn=0x000000000032B1FC string=0x000000000032B214 "("
 *   insn=0x000000000032B20C string=0x000000000032B210 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingableWeaponControllerComponent::ByteSize(
        Caver::Proto::SwingableWeaponControllerComponent *this,
        unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w0
  _QWORD *v7; // x21
  __int64 v8; // x8
  int v9; // w10
  int v10; // w0
  _QWORD *v11; // x21
  __int64 v12; // x8
  int v13; // w9

  LOBYTE(v3) = *((_BYTE *)this + 32);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_22;
  }
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
  {
    v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v5 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
    else if ( (unsigned int)v5 >= 0x80 )
    {
      v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
      v3 = *((_DWORD *)this + 8);
      v4 = v6 + 1;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
    else
    {
      v4 = 2;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
  }
  else
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 32) & 2) == 0 )
      goto LABEL_17;
  }
  v7 = (_QWORD *)*((_QWORD *)this + 2);
  v8 = *(_QWORD *)(*v7 - 24LL);
  if ( (unsigned int)v8 >= 0x80 )
  {
    v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v8,
            a2);
    v3 = *((_DWORD *)this + 8);
    v9 = v10;
    v8 = *(_QWORD *)(*v7 - 24LL);
  }
  else
  {
    v9 = 1;
  }
  v4 += v9 + v8 + 1;
LABEL_17:
  if ( (v3 & 4) != 0 )
  {
    v11 = (_QWORD *)*((_QWORD *)this + 3);
    v12 = *(_QWORD *)(*v11 - 24LL);
    if ( (unsigned int)v12 >= 0x80 )
    {
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v12,
              a2);
      v12 = *(_QWORD *)(*v11 - 24LL);
    }
    else
    {
      v13 = 1;
    }
    v4 += v13 + v12 + 1;
  }
LABEL_22:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

