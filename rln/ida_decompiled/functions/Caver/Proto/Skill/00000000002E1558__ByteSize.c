/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E1558
 * Mangled: _ZNK5Caver5Proto5Skill8ByteSizeEv
 * Demangled: Caver::Proto::Skill::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001F9D10  Caver::Proto::Skill::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 48
 *   insn=0x00000000002E1568 string=0x00000000002E156C "i"
 *   insn=0x00000000002E1574 string=0x00000000002E158C "t\n@"
 *   insn=0x00000000002E157C string=0x00000000002E1580 "#"
 *   insn=0x00000000002E157C string=0x00000000002E15CC "u"
 *   insn=0x00000000002E1580 string=0x00000000002E160C "I"
 *   insn=0x00000000002E1584 string=0x00000000002E1588 "X"
 *   insn=0x00000000002E1588 string=0x00000000002E16E8 "t\n"
 *   insn=0x00000000002E1590 string=0x00000000002E1594 ""
 *   insn=0x00000000002E1598 string=0x00000000002E159C "b"
 *   insn=0x00000000002E15A0 string=0x00000000002E15A4 ""
 *   insn=0x00000000002E15A4 string=0x00000000002E15C0 "H"
 *   insn=0x00000000002E15A8 string=0x00000000002E15AC "\tS"
 *   insn=0x00000000002E15AC string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002E15B0 string=0x00000000002E15B4 "i6@"
 *   insn=0x00000000002E15B8 string=0x00000000002E15BC ""
 *   insn=0x00000000002E15C4 string=0x00000000002E15C8 ")"
 *   insn=0x00000000002E15D0 string=0x00000000002E15D4 ""
 *   insn=0x00000000002E15D8 string=0x00000000002E15DC "b"
 *   insn=0x00000000002E15E0 string=0x00000000002E15E4 ""
 *   insn=0x00000000002E15E4 string=0x00000000002E1600 "H"
 *   insn=0x00000000002E15F0 string=0x00000000002E15F4 "i6@"
 *   insn=0x00000000002E15F8 string=0x00000000002E15FC ""
 *   insn=0x00000000002E160C string=0x00000000002E1610 "I"
 *   insn=0x00000000002E160C string=0x00000000002E1634 "u"
 *   insn=0x00000000002E1610 string=0x00000000002E1614 "\t"
 *   insn=0x00000000002E1610 string=0x00000000002E1678 "`*@"
 *   insn=0x00000000002E1614 string=0x00000000002E1694 "`.@"
 *   insn=0x00000000002E1618 string=0x00000000002E161C "`2@"
 *   insn=0x00000000002E1620 string=0x00000000002E16B4 "h"
 *   insn=0x00000000002E162C string=0x00000000002E1630 "-"
 *   insn=0x00000000002E1638 string=0x00000000002E163C ""
 *   insn=0x00000000002E1640 string=0x00000000002E1644 "b"
 *   insn=0x00000000002E1648 string=0x00000000002E164C ""
 *   insn=0x00000000002E164C string=0x00000000002E1668 "H"
 *   insn=0x00000000002E1658 string=0x00000000002E165C "i6@"
 *   insn=0x00000000002E1660 string=0x00000000002E1664 ""
 *   insn=0x00000000002E1670 string=0x00000000002E1674 "\t"
 *   insn=0x00000000002E167C string=0x00000000002E16BC "h"
 *   insn=0x00000000002E168C string=0x00000000002E1690 "I"
 *   insn=0x00000000002E1698 string=0x00000000002E16CC "h"
 *   insn=0x00000000002E16B4 string=0x00000000002E16B8 ""
 *   insn=0x00000000002E16D0 string=0x00000000002E16D4 "I"
 *   insn=0x00000000002E16DC string=0x00000000002E16E0 ""
 *   insn=0x00000000002E1700 string=0x00000000002E1704 "i6@"
 *   insn=0x00000000002E1704 string=0x00000000002E1708 ""
 *   insn=0x00000000002E170C string=0x00000000002E1710 "I"
 *   insn=0x00000000002E1718 string=0x00000000002E171C "i6@"
 *   insn=0x00000000002E171C string=0x00000000002E1720 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Skill::ByteSize(Caver::Proto::Skill *this, unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w20
  _QWORD *v5; // x20
  __int64 v6; // x8
  int v7; // w10
  int v8; // w0
  _QWORD *v9; // x21
  __int64 v10; // x8
  int v11; // w10
  int v12; // w0
  google::protobuf::io::CodedOutputStream *v13; // x0
  int v14; // w8
  _QWORD *v15; // x21
  __int64 v16; // x8
  int v17; // w10
  int v18; // w0
  google::protobuf::io::CodedOutputStream *v19; // x0
  google::protobuf::io::CodedOutputStream *v20; // x0
  int v22; // w0

  LOBYTE(v3) = *((_BYTE *)this + 52);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_39;
  }
  if ( (*((_BYTE *)this + 52) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 52) & 2) == 0 )
      goto LABEL_14;
    goto LABEL_10;
  }
  v5 = (_QWORD *)*((_QWORD *)this + 2);
  v6 = *(_QWORD *)(*v5 - 24LL);
  if ( (unsigned int)v6 >= 0x80 )
  {
    v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
           (google::protobuf::io::CodedOutputStream *)(unsigned int)v6,
           a2);
    v3 = *((_DWORD *)this + 13);
    v7 = v8;
    v6 = *(_QWORD *)(*v5 - 24LL);
  }
  else
  {
    v7 = 1;
  }
  v4 = v7 + v6 + 1;
  if ( (v3 & 2) != 0 )
  {
LABEL_10:
    v9 = (_QWORD *)*((_QWORD *)this + 3);
    v10 = *(_QWORD *)(*v9 - 24LL);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v10,
              a2);
      v3 = *((_DWORD *)this + 13);
      v11 = v12;
      v10 = *(_QWORD *)(*v9 - 24LL);
    }
    else
    {
      v11 = 1;
    }
    v4 += v11 + v10 + 1;
  }
LABEL_14:
  if ( (v3 & 4) == 0 )
  {
    if ( (v3 & 8) == 0 )
      goto LABEL_16;
LABEL_25:
    v19 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 10);
    if ( ((unsigned int)v19 & 0x80000000) != 0 )
    {
      v4 += 11;
      if ( (v3 & 0x10) != 0 )
        goto LABEL_28;
    }
    else if ( (unsigned int)v19 >= 0x80 )
    {
      v22 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v19, a2);
      v3 = *((_DWORD *)this + 13);
      v4 += v22 + 1;
      if ( (v3 & 0x10) != 0 )
        goto LABEL_28;
    }
    else
    {
      v4 += 2;
      if ( (v3 & 0x10) != 0 )
        goto LABEL_28;
    }
LABEL_17:
    if ( (v3 & 0x20) == 0 )
      goto LABEL_39;
    goto LABEL_18;
  }
  v15 = (_QWORD *)*((_QWORD *)this + 4);
  v16 = *(_QWORD *)(*v15 - 24LL);
  if ( (unsigned int)v16 >= 0x80 )
  {
    v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v16,
            a2);
    v3 = *((_DWORD *)this + 13);
    v17 = v18;
    v16 = *(_QWORD *)(*v15 - 24LL);
  }
  else
  {
    v17 = 1;
  }
  v4 += v17 + v16 + 1;
  if ( (v3 & 8) != 0 )
    goto LABEL_25;
LABEL_16:
  if ( (v3 & 0x10) == 0 )
    goto LABEL_17;
LABEL_28:
  v20 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 11);
  if ( ((unsigned int)v20 & 0x80000000) != 0 )
  {
    v4 += 11;
    if ( (v3 & 0x20) == 0 )
      goto LABEL_39;
  }
  else if ( (unsigned int)v20 >= 0x80 )
  {
    v4 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v20, a2) + 1;
    if ( (*((_DWORD *)this + 13) & 0x20) == 0 )
      goto LABEL_39;
  }
  else
  {
    v4 += 2;
    if ( (v3 & 0x20) == 0 )
      goto LABEL_39;
  }
LABEL_18:
  v13 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 12);
  if ( ((unsigned int)v13 & 0x80000000) != 0 )
  {
    v14 = 11;
  }
  else if ( (unsigned int)v13 >= 0x80 )
  {
    v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v13, a2) + 1;
  }
  else
  {
    v14 = 2;
  }
  v4 += v14;
LABEL_39:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

