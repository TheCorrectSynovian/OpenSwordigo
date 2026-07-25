/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032538C
 * Mangled: _ZNK5Caver5Proto34SnappingMonsterControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::SnappingMonsterControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 52
 *   insn=0x0000000000325398 string=0x000000000032539C "h"
 *   insn=0x000000000032539C string=0x00000000003253A0 "H"
 *   insn=0x00000000003253A0 string=0x00000000003253A4 "h"
 *   insn=0x00000000003253A4 string=0x00000000003253D0 "`"
 *   insn=0x00000000003253A8 string=0x00000000003253AC "("
 *   insn=0x00000000003253AC string=0x00000000003253B0 "`"
 *   insn=0x00000000003253AC string=0x0000000000325410 "("
 *   insn=0x00000000003253B4 string=0x00000000003253EC "i"
 *   insn=0x00000000003253B8 string=0x00000000003253BC """
 *   insn=0x00000000003253BC string=0x0000000000325400 "tC"
 *   insn=0x00000000003253C4 string=0x000000000032540C "4"
 *   insn=0x00000000003253C8 string=0x00000000003253CC ";"
 *   insn=0x00000000003253CC string=0x00000000003254B8 "t\n"
 *   insn=0x00000000003253D4 string=0x00000000003253F4 "t"
 *   insn=0x00000000003253DC string=0x0000000000325498 "NC"
 *   insn=0x00000000003253E0 string=0x00000000003253E4 "h"
 *   insn=0x00000000003253E4 string=0x00000000003253E8 "\n"
 *   insn=0x00000000003253EC string=0x00000000003253F0 ""
 *   insn=0x0000000000325400 string=0x0000000000325404 "h"@"
 *   insn=0x0000000000325400 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000325404 string=0x0000000000325408 "\t"
 *   insn=0x0000000000325410 string=0x0000000000325434 "`"
 *   insn=0x0000000000325414 string=0x0000000000325418 ""
 *   insn=0x0000000000325414 string=0x0000000000325450 "`"
 *   insn=0x0000000000325418 string=0x000000000032541C "`"
 *   insn=0x0000000000325420 string=0x0000000000325470 "h"
 *   insn=0x0000000000325424 string=0x0000000000325428 """
 *   insn=0x0000000000325428 string=0x00000000003254AC "IC"
 *   insn=0x000000000032542C string=0x0000000000325430 "!"
 *   insn=0x0000000000325438 string=0x0000000000325478 "i"
 *   insn=0x000000000032543C string=0x0000000000325440 "b"
 *   insn=0x0000000000325440 string=0x00000000003254CC "AC"
 *   insn=0x0000000000325444 string=0x0000000000325448 "4"
 *   insn=0x0000000000325448 string=0x000000000032544C "h"
 *   insn=0x0000000000325454 string=0x0000000000325488 "i"
 *   insn=0x0000000000325458 string=0x000000000032545C "B"
 *   insn=0x000000000032545C string=0x00000000003254E4 ";C"
 *   insn=0x0000000000325460 string=0x0000000000325464 "4"
 *   insn=0x0000000000325478 string=0x000000000032547C "4"
 *   insn=0x0000000000325488 string=0x000000000032548C "4"
 *   insn=0x000000000032548C string=0x0000000000325490 "h"
 *   insn=0x0000000000325490 string=0x0000000000325494 "\t"
 *   insn=0x0000000000325498 string=0x000000000032549C "h"@"
 *   insn=0x00000000003254A0 string=0x00000000003254A4 "h"
 *   insn=0x00000000003254AC string=0x00000000003254B0 ""
 *   insn=0x00000000003254CC string=0x00000000003254D0 "h"@"
 *   insn=0x00000000003254D0 string=0x00000000003254D4 "\t"
 *   insn=0x00000000003254D4 string=0x00000000003254D8 "4"
 *   insn=0x00000000003254E4 string=0x00000000003254E8 "h"@"
 *   insn=0x00000000003254E8 string=0x00000000003254EC "\t"
 *   insn=0x00000000003254EC string=0x00000000003254F0 "4"
 *   insn=0x00000000003254F0 string=0x00000000003254F4 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SnappingMonsterControllerComponent::ByteSize(
        Caver::Proto::SnappingMonsterControllerComponent *this,
        unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  google::protobuf::io::CodedOutputStream *v7; // x0
  int v8; // w0
  google::protobuf::io::CodedOutputStream *v9; // x0
  int v10; // w8
  google::protobuf::io::CodedOutputStream *v11; // x0
  google::protobuf::io::CodedOutputStream *v12; // x0
  int v13; // w0
  int v15; // w0

  LOBYTE(v3) = *((_BYTE *)this + 32);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_39;
  }
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
  {
    v7 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v7 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
    else if ( (unsigned int)v7 >= 0x80 )
    {
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, a2);
      v3 = *((_DWORD *)this + 8);
      v4 = v13 + 1;
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
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v6 = 11;
  }
  else if ( (unsigned int)v5 >= 0x80 )
  {
    v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
    v3 = *((_DWORD *)this + 8);
    v6 = v8 + 1;
  }
  else
  {
    v6 = 2;
  }
  v4 += v6;
LABEL_17:
  if ( (v3 & 4) != 0 )
  {
    v11 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 5);
    if ( ((unsigned int)v11 & 0x80000000) != 0 )
    {
      v4 += 11;
      if ( (v3 & 8) != 0 )
        goto LABEL_26;
    }
    else if ( (unsigned int)v11 >= 0x80 )
    {
      v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, a2);
      v3 = *((_DWORD *)this + 8);
      v4 += v15 + 1;
      if ( (v3 & 8) != 0 )
        goto LABEL_26;
    }
    else
    {
      v4 += 2;
      if ( (v3 & 8) != 0 )
        goto LABEL_26;
    }
LABEL_19:
    if ( (v3 & 0x10) == 0 )
      goto LABEL_39;
    goto LABEL_20;
  }
  if ( (v3 & 8) == 0 )
    goto LABEL_19;
LABEL_26:
  v12 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 6);
  if ( ((unsigned int)v12 & 0x80000000) != 0 )
  {
    v4 += 11;
    if ( (v3 & 0x10) == 0 )
      goto LABEL_39;
  }
  else if ( (unsigned int)v12 >= 0x80 )
  {
    v4 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v12, a2) + 1;
    if ( (*((_DWORD *)this + 8) & 0x10) == 0 )
      goto LABEL_39;
  }
  else
  {
    v4 += 2;
    if ( (v3 & 0x10) == 0 )
      goto LABEL_39;
  }
LABEL_20:
  v9 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 7);
  if ( ((unsigned int)v9 & 0x80000000) != 0 )
  {
    v10 = 11;
  }
  else if ( (unsigned int)v9 >= 0x80 )
  {
    v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, a2) + 1;
  }
  else
  {
    v10 = 2;
  }
  v4 += v10;
LABEL_39:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

