/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F44B0
 * Mangled: _ZNK5Caver5Proto14CharacterState8ByteSizeEv
 * Demangled: Caver::Proto::CharacterState::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001F75F0  Caver::Proto::CharacterState::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 140
 *   insn=0x00000000002F44C4 string=0x00000000002F44C8 "i"
 *   insn=0x00000000002F44C8 string=0x00000000002F44CC "?"
 *   insn=0x00000000002F44CC string=0x00000000002F44D0 "@"
 *   insn=0x00000000002F44D4 string=0x00000000002F4508 "`"
 *   insn=0x00000000002F44DC string=0x00000000002F44E0 "`"
 *   insn=0x00000000002F44E0 string=0x00000000002F44E4 " "
 *   insn=0x00000000002F44E4 string=0x00000000002F4528 "@"
 *   insn=0x00000000002F44EC string=0x00000000002F4540 "$"
 *   insn=0x00000000002F44F8 string=0x00000000002F44FC "?"
 *   insn=0x00000000002F44FC string=0x00000000002F4500 "a"
 *   insn=0x00000000002F4500 string=0x00000000002F456C "i"
 *   insn=0x00000000002F4504 string=0x00000000002F4890 "h*@"
 *   insn=0x00000000002F4508 string=0x00000000002F450C " "
 *   insn=0x00000000002F450C string=0x00000000002F4530 "@"
 *   insn=0x00000000002F451C string=0x00000000002F4520 "\t"
 *   insn=0x00000000002F4520 string=0x00000000002F4524 ""
 *   insn=0x00000000002F4528 string=0x00000000002F452C ""
 *   insn=0x00000000002F4534 string=0x00000000002F4538 "I"
 *   insn=0x00000000002F4540 string=0x00000000002F4544 "i"
 *   insn=0x00000000002F4540 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002F4550 string=0x00000000002F45A0 "`"
 *   insn=0x00000000002F4554 string=0x00000000002F476C "`"
 *   insn=0x00000000002F4558 string=0x00000000002F455C "I"
 *   insn=0x00000000002F4558 string=0x00000000002F47D0 "`"
 *   insn=0x00000000002F455C string=0x00000000002F4560 "I"
 *   insn=0x00000000002F455C string=0x00000000002F4804 "u.@"
 *   insn=0x00000000002F4560 string=0x00000000002F4564 "?"
 *   insn=0x00000000002F4560 string=0x00000000002F4848 "u2@"
 *   insn=0x00000000002F4564 string=0x00000000002F4568 "@"
 *   insn=0x00000000002F456C string=0x00000000002F4570 "i"
 *   insn=0x00000000002F456C string=0x00000000002F45B8 "uR@"
 *   insn=0x00000000002F4570 string=0x00000000002F4574 "i"
 *   insn=0x00000000002F4570 string=0x00000000002F45FC "uV@"
 *   insn=0x00000000002F4574 string=0x00000000002F4578 "i`7i\nh7)p7i"
 *   insn=0x00000000002F4574 string=0x00000000002F4640 "uZ@"
 *   insn=0x00000000002F4578 string=0x00000000002F457C "i\nh7)p7i"
 *   insn=0x00000000002F4578 string=0x00000000002F4684 "u^@"
 *   insn=0x00000000002F457C string=0x00000000002F4580 ")p7i"
 *   insn=0x00000000002F457C string=0x00000000002F46C8 "`"
 *   insn=0x00000000002F4580 string=0x00000000002F4584 "i"
 *   insn=0x00000000002F4580 string=0x00000000002F46E4 "`"
 *   insn=0x00000000002F4584 string=0x00000000002F4588 "`"
 *   insn=0x00000000002F4598 string=0x00000000002F459C "m"
 *   insn=0x00000000002F45A0 string=0x00000000002F45A4 "@"
 *   insn=0x00000000002F45A4 string=0x00000000002F470C "@"
 *   insn=0x00000000002F45A8 string=0x00000000002F45AC "b"
 *   insn=0x00000000002F45B0 string=0x00000000002F45B4 "k"
 *   insn=0x00000000002F45BC string=0x00000000002F45C0 ""
 *   insn=0x00000000002F45C4 string=0x00000000002F45C8 "b"
 *   insn=0x00000000002F45CC string=0x00000000002F45D0 ""
 *   insn=0x00000000002F45D0 string=0x00000000002F45EC "H"
 *   insn=0x00000000002F45DC string=0x00000000002F45E0 "i"
 *   insn=0x00000000002F45E4 string=0x00000000002F45E8 ""
 *   insn=0x00000000002F4600 string=0x00000000002F4604 ""
 *   insn=0x00000000002F4608 string=0x00000000002F460C "b"
 *   insn=0x00000000002F4610 string=0x00000000002F4614 ""
 *   insn=0x00000000002F4614 string=0x00000000002F4630 "H"
 *   insn=0x00000000002F4620 string=0x00000000002F4624 "i"
 *   insn=0x00000000002F4628 string=0x00000000002F462C ""
 *   insn=0x00000000002F4644 string=0x00000000002F4648 ""
 *   insn=0x00000000002F464C string=0x00000000002F4650 "b"
 *   insn=0x00000000002F4654 string=0x00000000002F4658 ""
 *   insn=0x00000000002F4658 string=0x00000000002F4674 "H"
 *   insn=0x00000000002F4664 string=0x00000000002F4668 "i"
 *   insn=0x00000000002F466C string=0x00000000002F4670 ""
 *   insn=0x00000000002F4688 string=0x00000000002F468C ""
 *   insn=0x00000000002F4690 string=0x00000000002F4694 "b"
 *   insn=0x00000000002F4698 string=0x00000000002F469C ""
 *   insn=0x00000000002F469C string=0x00000000002F46B8 "H"
 *   insn=0x00000000002F46A8 string=0x00000000002F46AC "i"
 *   insn=0x00000000002F46B0 string=0x00000000002F46B4 ""
 *   insn=0x00000000002F46C8 string=0x00000000002F46CC "@"
 *   insn=0x00000000002F46DC string=0x00000000002F46E0 ")"
 *   insn=0x00000000002F46F8 string=0x00000000002F46FC "i"
 *   insn=0x00000000002F46FC string=0x00000000002F4700 "d"
 *   insn=0x00000000002F4718 string=0x00000000002F471C "I"
 *   insn=0x00000000002F472C string=0x00000000002F4730 "X"
 *   insn=0x00000000002F4734 string=0x00000000002F4738 "i"
 *   insn=0x00000000002F473C string=0x00000000002F4740 "\t"
 *   insn=0x00000000002F4748 string=0x00000000002F474C ""
 *   insn=0x00000000002F4750 string=0x00000000002F4754 "O"
 *   insn=0x00000000002F4758 string=0x00000000002F475C "i"
 *   insn=0x00000000002F4770 string=0x00000000002F4784 "@"
 *   insn=0x00000000002F4774 string=0x00000000002F4778 """
 *   insn=0x00000000002F478C string=0x00000000002F4790 "i"
 *   insn=0x00000000002F4790 string=0x00000000002F4794 ""
 *   insn=0x00000000002F4798 string=0x00000000002F479C "I"
 *   insn=0x00000000002F47A4 string=0x00000000002F47A8 "i"
 *   insn=0x00000000002F47A8 string=0x00000000002F47AC ""
 *   insn=0x00000000002F47B4 string=0x00000000002F47B8 "6"
 *   insn=0x00000000002F47BC string=0x00000000002F47C0 "i"
 *   insn=0x00000000002F47D4 string=0x00000000002F47E8 "@"
 *   insn=0x00000000002F47DC string=0x00000000002F47F0 "x"
 *   insn=0x00000000002F47F0 string=0x00000000002F47F4 "i"
 *   insn=0x00000000002F47FC string=0x00000000002F4800 "\t"
 *   insn=0x00000000002F4808 string=0x00000000002F480C ""
 *   insn=0x00000000002F4810 string=0x00000000002F4814 "b"
 *   insn=0x00000000002F4818 string=0x00000000002F481C ""
 *   insn=0x00000000002F481C string=0x00000000002F4838 "H"
 *   insn=0x00000000002F4820 string=0x00000000002F4824 "k"
 *   insn=0x00000000002F4828 string=0x00000000002F482C "i"
 *   insn=0x00000000002F4830 string=0x00000000002F4834 ""
 *   insn=0x00000000002F4840 string=0x00000000002F4844 "\t"
 *   insn=0x00000000002F484C string=0x00000000002F4850 ""
 *   insn=0x00000000002F4854 string=0x00000000002F4858 "b"
 *   insn=0x00000000002F485C string=0x00000000002F4860 ""
 *   insn=0x00000000002F4860 string=0x00000000002F487C "H"
 *   insn=0x00000000002F4864 string=0x00000000002F4868 "Z"
 *   insn=0x00000000002F486C string=0x00000000002F4870 "i"
 *   insn=0x00000000002F4874 string=0x00000000002F4878 ""
 *   insn=0x00000000002F4884 string=0x00000000002F4888 "?"
 *   insn=0x00000000002F489C string=0x00000000002F4974 "ir@"
 *   insn=0x00000000002F48A0 string=0x00000000002F48A4 "h"
 *   insn=0x00000000002F48AC string=0x00000000002F48B0 "I"
 *   insn=0x00000000002F48B8 string=0x00000000002F48BC ")"
 *   insn=0x00000000002F48C0 string=0x00000000002F48C4 "@"
 *   insn=0x00000000002F48C4 string=0x00000000002F492C "h"
 *   insn=0x00000000002F48C8 string=0x00000000002F48CC "B"
 *   insn=0x00000000002F48CC string=0x00000000002F4934 "'"
 *   insn=0x00000000002F48E4 string=0x00000000002F495C "h*"
 *   insn=0x00000000002F48EC string=0x00000000002F48F0 ""
 *   insn=0x00000000002F48F4 string=0x00000000002F48F8 "b"
 *   insn=0x00000000002F48FC string=0x00000000002F4900 ""
 *   insn=0x00000000002F4900 string=0x00000000002F491C "H"
 *   insn=0x00000000002F4904 string=0x00000000002F4908 "2"
 *   insn=0x00000000002F4914 string=0x00000000002F4918 ""
 *   insn=0x00000000002F4934 string=0x00000000002F4938 ""
 *   insn=0x00000000002F4944 string=0x00000000002F4948 "b"
 *   insn=0x00000000002F4964 string=0x00000000002F4968 "5"
 *   insn=0x00000000002F4974 string=0x00000000002F4978 "?"
 *   insn=0x00000000002F4978 string=0x00000000002F497C "4"
 *   insn=0x00000000002F4980 string=0x00000000002F49D4 "t\n"
 *   insn=0x00000000002F4984 string=0x00000000002F4988 "h6@"
 *   insn=0x00000000002F4990 string=0x00000000002F4994 ""
 *   insn=0x00000000002F4998 string=0x00000000002F499C "b"
 *   insn=0x00000000002F49A0 string=0x00000000002F49A4 ""
 *   insn=0x00000000002F49A4 string=0x00000000002F49C0 "H"
 *   insn=0x00000000002F49A8 string=0x00000000002F49AC "\t"
 *   insn=0x00000000002F49B0 string=0x00000000002F49B4 "ir@"
 *   insn=0x00000000002F49B8 string=0x00000000002F49BC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharacterState::ByteSize(Caver::Proto::CharacterState *this, unsigned int a2)
{
  int v3; // w9
  int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w0
  google::protobuf::io::CodedOutputStream *v7; // x0
  google::protobuf::io::CodedOutputStream *v8; // x0
  int v9; // w8
  google::protobuf::io::CodedOutputStream *v10; // x0
  int v11; // w0
  _QWORD *v12; // x21
  __int64 v13; // x8
  int v14; // w10
  int v15; // w0
  _QWORD *v16; // x21
  __int64 v17; // x8
  int v18; // w10
  int v19; // w0
  _QWORD *v20; // x21
  __int64 v21; // x8
  int v22; // w10
  int v23; // w0
  _QWORD *v24; // x21
  __int64 v25; // x8
  int v26; // w10
  int v27; // w0
  google::protobuf::io::CodedOutputStream *v28; // x0
  google::protobuf::io::CodedOutputStream *v29; // x0
  int v30; // w0
  google::protobuf::io::CodedOutputStream *v31; // x0
  int v32; // w0
  int v33; // w0
  google::protobuf::io::CodedOutputStream *v34; // x0
  int v35; // w0
  _QWORD *v36; // x21
  __int64 v37; // x8
  int v38; // w10
  int v39; // w0
  _QWORD *v40; // x21
  __int64 v41; // x8
  int v42; // w10
  int v43; // w0
  int v44; // w8
  int v45; // w21
  __int64 v46; // x22
  __int64 v47; // x23
  int v48; // w9
  unsigned int v49; // w20
  google::protobuf::io::CodedOutputStream *v50; // x0
  int v51; // w8
  int v52; // w0
  _QWORD *v53; // x20
  __int64 v54; // x8
  int v55; // w10
  int v56; // w0
  int v57; // w9
  unsigned int v58; // w20
  __int64 i; // x21
  _QWORD *v60; // x22
  __int64 v61; // x8
  int v62; // w10
  int v63; // w0

  v3 = *((_DWORD *)this + 51);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    if ( (v3 & 0x1FE00) == 0 )
      goto LABEL_96;
LABEL_24:
    if ( (v3 & 0x200) != 0 )
    {
      v12 = (_QWORD *)*((_QWORD *)this + 20);
      v13 = *(_QWORD *)(*v12 - 24LL);
      if ( (unsigned int)v13 >= 0x80 )
      {
        v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)(unsigned int)v13,
                a2);
        v3 = *((_DWORD *)this + 51);
        v14 = v15;
        v13 = *(_QWORD *)(*v12 - 24LL);
      }
      else
      {
        v14 = 1;
      }
      v4 += v14 + v13 + 2;
      if ( (v3 & 0x400) == 0 )
      {
LABEL_26:
        if ( (v3 & 0x800) == 0 )
          goto LABEL_27;
        goto LABEL_45;
      }
    }
    else if ( (v3 & 0x400) == 0 )
    {
      goto LABEL_26;
    }
    v16 = (_QWORD *)*((_QWORD *)this + 21);
    v17 = *(_QWORD *)(*v16 - 24LL);
    if ( (unsigned int)v17 >= 0x80 )
    {
      v19 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v17,
              a2);
      v3 = *((_DWORD *)this + 51);
      v18 = v19;
      v17 = *(_QWORD *)(*v16 - 24LL);
    }
    else
    {
      v18 = 1;
    }
    v4 += v18 + v17 + 2;
    if ( (v3 & 0x800) == 0 )
    {
LABEL_27:
      if ( (v3 & 0x1000) == 0 )
        goto LABEL_28;
      goto LABEL_49;
    }
LABEL_45:
    v20 = (_QWORD *)*((_QWORD *)this + 22);
    v21 = *(_QWORD *)(*v20 - 24LL);
    if ( (unsigned int)v21 >= 0x80 )
    {
      v23 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v21,
              a2);
      v3 = *((_DWORD *)this + 51);
      v22 = v23;
      v21 = *(_QWORD *)(*v20 - 24LL);
    }
    else
    {
      v22 = 1;
    }
    v4 += v22 + v21 + 2;
    if ( (v3 & 0x1000) == 0 )
    {
LABEL_28:
      if ( (v3 & 0x2000) == 0 )
        goto LABEL_29;
      goto LABEL_53;
    }
LABEL_49:
    v24 = (_QWORD *)*((_QWORD *)this + 23);
    v25 = *(_QWORD *)(*v24 - 24LL);
    if ( (unsigned int)v25 >= 0x80 )
    {
      v27 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v25,
              a2);
      v3 = *((_DWORD *)this + 51);
      v26 = v27;
      v25 = *(_QWORD *)(*v24 - 24LL);
    }
    else
    {
      v26 = 1;
    }
    v4 += v26 + v25 + 2;
    if ( (v3 & 0x2000) == 0 )
    {
LABEL_29:
      if ( (v3 & 0x4000) == 0 )
        goto LABEL_30;
LABEL_56:
      v29 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 49);
      if ( ((unsigned int)v29 & 0x80000000) != 0 )
      {
        v4 += 12;
        if ( (v3 & 0x8000) == 0 )
          goto LABEL_96;
      }
      else if ( (unsigned int)v29 >= 0x80 )
      {
        v4 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v29, a2) + 2;
        if ( (*((_DWORD *)this + 51) & 0x8000) == 0 )
          goto LABEL_96;
      }
      else
      {
        v4 += 3;
        if ( (v3 & 0x8000) == 0 )
          goto LABEL_96;
      }
      goto LABEL_31;
    }
LABEL_53:
    v28 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 48);
    if ( ((unsigned int)v28 & 0x80000000) != 0 )
    {
      v4 += 12;
      if ( (v3 & 0x4000) != 0 )
        goto LABEL_56;
    }
    else if ( (unsigned int)v28 >= 0x80 )
    {
      v33 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v28, a2);
      v3 = *((_DWORD *)this + 51);
      v4 += v33 + 2;
      if ( (v3 & 0x4000) != 0 )
        goto LABEL_56;
    }
    else
    {
      v4 += 3;
      if ( (v3 & 0x4000) != 0 )
        goto LABEL_56;
    }
LABEL_30:
    if ( (v3 & 0x8000) == 0 )
      goto LABEL_96;
LABEL_31:
    v8 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 50);
    if ( ((unsigned int)v8 & 0x80000000) != 0 )
    {
      v9 = 12;
    }
    else if ( (unsigned int)v8 >= 0x80 )
    {
      v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, a2) + 2;
    }
    else
    {
      v9 = 3;
    }
    v4 += v9;
    goto LABEL_96;
  }
  if ( (v3 & 1) != 0 )
  {
    v7 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v7 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_18;
    }
    else if ( (unsigned int)v7 >= 0x80 )
    {
      v30 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, a2);
      v3 = *((_DWORD *)this + 51);
      v4 = v30 + 1;
      if ( (v3 & 2) == 0 )
        goto LABEL_18;
    }
    else
    {
      v4 = 2;
      if ( (v3 & 2) == 0 )
        goto LABEL_18;
    }
  }
  else
  {
    v4 = 0;
    if ( (v3 & 2) == 0 )
      goto LABEL_18;
  }
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v6 = 10;
  }
  else if ( (unsigned int)v5 >= 0x80 )
  {
    v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
    v3 = *((_DWORD *)this + 51);
  }
  else
  {
    v6 = 1;
  }
  v4 += v6 + 1;
LABEL_18:
  if ( (v3 & 4) != 0 )
  {
    v10 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 5);
    if ( ((unsigned int)v10 & 0x80000000) != 0 )
    {
      v11 = 10;
    }
    else if ( (unsigned int)v10 >= 0x80 )
    {
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, a2);
      v3 = *((_DWORD *)this + 51);
    }
    else
    {
      v11 = 1;
    }
    v4 += v11 + 1;
    if ( (v3 & 8) == 0 )
    {
LABEL_20:
      if ( (v3 & 0x10) == 0 )
        goto LABEL_21;
      goto LABEL_82;
    }
  }
  else if ( (v3 & 8) == 0 )
  {
    goto LABEL_20;
  }
  v31 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 6);
  if ( ((unsigned int)v31 & 0x80000000) != 0 )
  {
    v32 = 10;
  }
  else if ( (unsigned int)v31 >= 0x80 )
  {
    v32 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v31, a2);
    v3 = *((_DWORD *)this + 51);
  }
  else
  {
    v32 = 1;
  }
  v4 += v32 + 1;
  if ( (v3 & 0x10) == 0 )
  {
LABEL_21:
    if ( (v3 & 0x40) == 0 )
      goto LABEL_22;
    goto LABEL_88;
  }
LABEL_82:
  v34 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 7);
  if ( ((unsigned int)v34 & 0x80000000) != 0 )
  {
    v35 = 10;
  }
  else if ( (unsigned int)v34 >= 0x80 )
  {
    v35 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v34, a2);
    v3 = *((_DWORD *)this + 51);
  }
  else
  {
    v35 = 1;
  }
  v4 += v35 + 1;
  if ( (v3 & 0x40) == 0 )
  {
LABEL_22:
    if ( (v3 & 0x80) == 0 )
      goto LABEL_23;
    goto LABEL_92;
  }
LABEL_88:
  v36 = (_QWORD *)*((_QWORD *)this + 11);
  v37 = *(_QWORD *)(*v36 - 24LL);
  if ( (unsigned int)v37 >= 0x80 )
  {
    v39 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v37,
            a2);
    v3 = *((_DWORD *)this + 51);
    v38 = v39;
    v37 = *(_QWORD *)(*v36 - 24LL);
  }
  else
  {
    v38 = 1;
  }
  v4 += v38 + v37 + 1;
  if ( (v3 & 0x80) == 0 )
  {
LABEL_23:
    if ( (v3 & 0x1FE00) == 0 )
      goto LABEL_96;
    goto LABEL_24;
  }
LABEL_92:
  v40 = (_QWORD *)*((_QWORD *)this + 12);
  v41 = *(_QWORD *)(*v40 - 24LL);
  if ( (unsigned int)v41 >= 0x80 )
  {
    v43 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v41,
            a2);
    v3 = *((_DWORD *)this + 51);
    v42 = v43;
    v41 = *(_QWORD *)(*v40 - 24LL);
  }
  else
  {
    v42 = 1;
  }
  v4 += v42 + v41 + 1;
  if ( (v3 & 0x1FE00) != 0 )
    goto LABEL_24;
LABEL_96:
  v44 = *((_DWORD *)this + 10);
  v45 = v44 + v4;
  if ( v44 >= 1 )
  {
    v46 = 0;
    while ( 1 )
    {
      v47 = *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v46);
      LOBYTE(v48) = *(_BYTE *)(v47 + 28);
      if ( (_BYTE)v48 )
        break;
      v49 = 0;
      *(_DWORD *)(v47 + 8) = 0;
      v52 = 1;
LABEL_116:
      ++v46;
      v45 += v49 + v52;
      if ( v46 >= *((int *)this + 10) )
        goto LABEL_117;
    }
    if ( (*(_BYTE *)(v47 + 28) & 1) != 0 )
    {
      v53 = *(_QWORD **)(v47 + 16);
      v54 = *(_QWORD *)(*v53 - 24LL);
      if ( (unsigned int)v54 >= 0x80 )
      {
        v56 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)(unsigned int)v54,
                a2);
        v48 = *(_DWORD *)(v47 + 28);
        v55 = v56;
        v54 = *(_QWORD *)(*v53 - 24LL);
      }
      else
      {
        v55 = 1;
      }
      v49 = v55 + v54 + 1;
      if ( (v48 & 2) == 0 )
        goto LABEL_113;
    }
    else
    {
      v49 = 0;
      if ( (*(_BYTE *)(v47 + 28) & 2) == 0 )
      {
LABEL_113:
        *(_DWORD *)(v47 + 8) = v49;
        if ( v49 >= 0x80 )
          v52 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                  (google::protobuf::io::CodedOutputStream *)v49,
                  a2);
        else
          v52 = 1;
        goto LABEL_116;
      }
    }
    v50 = (google::protobuf::io::CodedOutputStream *)*(unsigned int *)(v47 + 24);
    if ( ((unsigned int)v50 & 0x80000000) != 0 )
    {
      v51 = 11;
    }
    else if ( (unsigned int)v50 >= 0x80 )
    {
      v51 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v50, a2) + 1;
    }
    else
    {
      v51 = 2;
    }
    v49 += v51;
    goto LABEL_113;
  }
LABEL_117:
  v57 = *((_DWORD *)this + 28);
  v58 = v57 + v45;
  if ( v57 >= 1 )
  {
    for ( i = 0; i < v57; ++i )
    {
      v60 = *(_QWORD **)(*((_QWORD *)this + 13) + 8 * i);
      v61 = *(_QWORD *)(*v60 - 24LL);
      if ( (unsigned int)v61 >= 0x80 )
      {
        v63 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)(unsigned int)v61,
                a2);
        v57 = *((_DWORD *)this + 28);
        v62 = v63;
        v61 = *(_QWORD *)(*v60 - 24LL);
      }
      else
      {
        v62 = 1;
      }
      v58 += v62 + v61;
    }
  }
  *((_DWORD *)this + 2) = v58;
  return v58;
}

