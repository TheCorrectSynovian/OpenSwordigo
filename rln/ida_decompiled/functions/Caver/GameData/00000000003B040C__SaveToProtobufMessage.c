/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B040C
 * Mangled: _ZNK5Caver8GameData21SaveToProtobufMessageEPNS_5Proto8GameDataE
 * Demangled: Caver::GameData::SaveToProtobufMessage(Caver::Proto::GameData *)
 *
 * Callers: 0
 *
 * Callees: 16
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6C50  Caver::EntityClass::SaveToProtobufMessage(Caver::Proto::EntityClass *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8230  Caver::GuideTarget::SaveToProtobufMessage(Caver::Proto::GuideTarget *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FB340  Caver::Item::SaveToProtobufMessage(Caver::Proto::Item *)
 *   0x00000000001FB6E0  Caver::Proto::EntityClass::EntityClass(void)
 *   0x00000000001FB9F0  Caver::Proto::Quest::Quest(void)
 *   0x00000000001FBCF0  Caver::Skill::SaveToProtobufMessage(Caver::Proto::Skill *)
 *   0x00000000001FD750  Caver::Quest::SaveToProtobufMessage(Caver::Proto::Quest *)
 *   0x0000000000201310  Caver::Proto::Skill::Skill(void)
 *   0x0000000000202400  Caver::Proto::Item::Item(void)
 *   0x0000000000203260  Caver::Proto::GuideTarget::GuideTarget(void)
 *   0x00000000003B0788  Caver::GameData::ItemForName(std::string const&)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 106
 *   insn=0x00000000003B0430 string=0x00000000003B0434 "?"
 *   insn=0x00000000003B0438 string=0x00000000003B043C "vB"
 *   insn=0x00000000003B043C string=0x00000000003B0440 "i"C)"
 *   insn=0x00000000003B0444 string=0x00000000003B0448 ")}@"
 *   insn=0x00000000003B0448 string=0x00000000003B044C "?"
 *   insn=0x00000000003B0450 string=0x00000000003B0454 "h\n@"
 *   insn=0x00000000003B0450 string=0x00000000003B0468 "i"@"
 *   insn=0x00000000003B0454 string=0x00000000003B0458 "*"
 *   insn=0x00000000003B0458 string=0x00000000003B045C "j"
 *   insn=0x00000000003B0470 string=0x00000000003B0484 ""
 *   insn=0x00000000003B0478 string=0x00000000003B047C ")*"
 *   insn=0x00000000003B047C string=0x00000000003B0480 "h"
 *   insn=0x00000000003B047C string=0x00000000001FAD20 "0'"
 *   insn=0x00000000003B0488 string=0x00000000003B048C "h"
 *   insn=0x00000000003B048C string=0x00000000003B0490 "T"
 *   insn=0x00000000003B0490 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B0498 string=0x00000000003B049C "h"
 *   insn=0x00000000003B049C string=0x00000000003B04A0 "i\n@"
 *   insn=0x00000000003B04A0 string=0x00000000003B04A4 "\n"
 *   insn=0x00000000003B04A4 string=0x00000000003B04A8 "j"
 *   insn=0x00000000003B04A8 string=0x00000000003B04AC "8y("
 *   insn=0x00000000003B04B8 string=0x00000000001FB340 "0'"
 *   insn=0x00000000003B04BC string=0x00000000003B04C0 "xp"
 *   insn=0x00000000003B04C4 string=0x00000000003B04C8 "?"
 *   insn=0x00000000003B04D8 string=0x00000000003B04DC "u""
 *   insn=0x00000000003B04DC string=0x00000000003B04E0 "i"J)"
 *   insn=0x00000000003B04E4 string=0x00000000003B04E8 ")}@"
 *   insn=0x00000000003B04E8 string=0x00000000003B04EC "?"
 *   insn=0x00000000003B04F0 string=0x00000000003B04F4 "h&@"
 *   insn=0x00000000003B04F0 string=0x00000000003B0508 "iZ@"
 *   insn=0x00000000003B04F4 string=0x00000000003B04F8 "*"
 *   insn=0x00000000003B04F8 string=0x00000000003B04FC "jR"
 *   insn=0x00000000003B0510 string=0x00000000003B0524 ""
 *   insn=0x00000000003B051C string=0x00000000003B0520 "hV@"
 *   insn=0x00000000003B0528 string=0x00000000003B052C "hV"
 *   insn=0x00000000003B052C string=0x00000000003B0530 ","
 *   insn=0x00000000003B0534 string=0x00000000003B0538 "vC"
 *   insn=0x00000000003B0538 string=0x00000000003B053C "hR"
 *   insn=0x00000000003B053C string=0x00000000003B0540 "i&@"
 *   insn=0x00000000003B0540 string=0x00000000003B0544 "\n"
 *   insn=0x00000000003B0544 string=0x00000000003B0548 "jR"
 *   insn=0x00000000003B0548 string=0x00000000003B054C "7y("
 *   insn=0x00000000003B0558 string=0x00000000001FBCF0 "0'"
 *   insn=0x00000000003B055C string=0x00000000003B0560 "?"
 *   insn=0x00000000003B0570 string=0x00000000003B0574 "u"
 *   insn=0x00000000003B0574 string=0x00000000003B0578 "i"Q)"
 *   insn=0x00000000003B057C string=0x00000000003B0580 ")}@"
 *   insn=0x00000000003B0580 string=0x00000000003B0584 "?"
 *   insn=0x00000000003B0588 string=0x00000000003B058C "hB@"
 *   insn=0x00000000003B0588 string=0x00000000003B05A0 "i"
 *   insn=0x00000000003B058C string=0x00000000003B0590 "*"
 *   insn=0x00000000003B0590 string=0x00000000003B0594 "j"
 *   insn=0x00000000003B05A8 string=0x00000000003B05BC ""
 *   insn=0x00000000003B05B4 string=0x00000000003B05B8 "h"
 *   insn=0x00000000003B05C0 string=0x00000000003B05C4 "h"
 *   insn=0x00000000003B05CC string=0x00000000003B05D0 "-"
 *   insn=0x00000000003B05D0 string=0x00000000003B05D4 "h"
 *   insn=0x00000000003B05D0 string=0x00000000001FB9F0 "0'"
 *   insn=0x00000000003B05D4 string=0x00000000003B05D8 "iB@"
 *   insn=0x00000000003B05D8 string=0x00000000003B05DC "\n"
 *   insn=0x00000000003B05DC string=0x00000000003B05E0 "j"
 *   insn=0x00000000003B05E0 string=0x00000000003B05E4 "7y("
 *   insn=0x00000000003B05EC string=0x00000000003B05F0 "X4"
 *   insn=0x00000000003B05F0 string=0x00000000001FD750 "0'"
 *   insn=0x00000000003B05F4 string=0x00000000003B05F8 "?"
 *   insn=0x00000000003B0604 string=0x00000000003B0608 "?"
 *   insn=0x00000000003B060C string=0x00000000003B0610 "v"
 *   insn=0x00000000003B0610 string=0x00000000003B0614 "i"X)"
 *   insn=0x00000000003B0618 string=0x00000000003B061C ")}@"
 *   insn=0x00000000003B061C string=0x00000000003B0620 "?"
 *   insn=0x00000000003B0624 string=0x00000000003B0628 "h^@"
 *   insn=0x00000000003B0624 string=0x00000000003B063C "i"
 *   insn=0x00000000003B0628 string=0x00000000003B062C "*"
 *   insn=0x00000000003B062C string=0x00000000003B0630 "j"
 *   insn=0x00000000003B0644 string=0x00000000003B0658 ""
 *   insn=0x00000000003B0650 string=0x00000000003B0654 "h"
 *   insn=0x00000000003B065C string=0x00000000003B0660 "h"
 *   insn=0x00000000003B066C string=0x00000000003B0670 "h"
 *   insn=0x00000000003B066C string=0x00000000001FB6E0 "0'"
 *   insn=0x00000000003B0670 string=0x00000000003B0674 "i^@"
 *   insn=0x00000000003B0674 string=0x00000000003B0678 "\n"
 *   insn=0x00000000003B0678 string=0x00000000003B067C "j"
 *   insn=0x00000000003B067C string=0x00000000003B0680 "8y("
 *   insn=0x00000000003B0688 string=0x00000000003B068C "q"
 *   insn=0x00000000003B068C string=0x00000000001F6C50 "0'"
 *   insn=0x00000000003B0698 string=0x00000000003B069C "?"
 *   insn=0x00000000003B06AC string=0x00000000003B06B0 "t"
 *   insn=0x00000000003B06B0 string=0x00000000003B06B4 "i"_)"
 *   insn=0x00000000003B06B8 string=0x00000000003B06BC ")}@"
 *   insn=0x00000000003B06BC string=0x00000000003B06C0 "?"
 *   insn=0x00000000003B06C4 string=0x00000000003B06C8 "hz@"
 *   insn=0x00000000003B06C4 string=0x00000000003B06DC "i"
 *   insn=0x00000000003B06C8 string=0x00000000003B06CC "*"
 *   insn=0x00000000003B06CC string=0x00000000003B06D0 "j"
 *   insn=0x00000000003B06E4 string=0x00000000003B06F8 ""
 *   insn=0x00000000003B06F0 string=0x00000000003B06F4 "h"
 *   insn=0x00000000003B06FC string=0x00000000003B0700 "h"
 *   insn=0x00000000003B070C string=0x00000000003B0710 "h"
 *   insn=0x00000000003B0710 string=0x00000000003B0714 "iz@"
 *   insn=0x00000000003B0714 string=0x00000000003B0718 "\n"
 *   insn=0x00000000003B0718 string=0x00000000003B071C "j"
 *   insn=0x00000000003B071C string=0x00000000003B0720 "6y("
 *   insn=0x00000000003B072C string=0x00000000001F8230 "0'"
 *   insn=0x00000000003B0758 string=0x00000000003B075C ""
 *   insn=0x00000000003B077C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B0780 string=0x00000000003B0784 "PD"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameData::SaveToProtobufMessage(Caver::GameData *this, Caver::Proto::GameData *a2)
{
  __int64 v3; // x21
  char *v4; // x25
  int v6; // w8
  Caver::Item *v7; // x23
  __int64 v8; // x9
  __int64 v9; // x8
  Caver::Proto::Item *v10; // x24
  __int64 v11; // x8
  __int64 v12; // x9
  Caver::Skill **v13; // x24
  Caver::Skill **i; // x25
  int v15; // w8
  Caver::Skill *v16; // x22
  __int64 v17; // x9
  __int64 v18; // x8
  Caver::Proto::Skill *v19; // x23
  __int64 v20; // x8
  __int64 v21; // x9
  Caver::Quest **v22; // x24
  Caver::Quest **j; // x25
  int v24; // w8
  Caver::Quest *v25; // x22
  __int64 v26; // x9
  __int64 v27; // x8
  Caver::Proto::Quest *v28; // x23
  __int64 v29; // x8
  __int64 v30; // x9
  _QWORD *k; // x21
  int v32; // w8
  Caver::EntityClass *v33; // x23
  __int64 v34; // x9
  __int64 v35; // x8
  Caver::Proto::EntityClass *v36; // x24
  __int64 v37; // x8
  __int64 v38; // x9
  __int64 v39; // x23
  __int64 m; // x24
  int v41; // w8
  int v42; // w9
  Caver::Proto::GuideTarget *v43; // x22
  __int64 v44; // x8
  __int64 v45; // x9

  v3 = *((_QWORD *)this + 3);
  v4 = (char *)this + 8;
  if ( (Caver::GameData *)((char *)this + 8) != (Caver::GameData *)v3 )
  {
    do
    {
      v6 = *((_DWORD *)a2 + 7);
      v7 = *(Caver::Item **)(v3 + 40);
      v8 = *((int *)a2 + 6);
      if ( (int)v8 >= v6 )
      {
        if ( v6 == *((_DWORD *)a2 + 8) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve((Caver::Proto::GameData *)((char *)a2 + 16), v6 + 1);
          v6 = *((_DWORD *)a2 + 7);
        }
        *((_DWORD *)a2 + 7) = v6 + 1;
        v10 = (Caver::Proto::Item *)operator new(0x48u);
        Caver::Proto::Item::Item(v10);
        v11 = *((int *)a2 + 6);
        v12 = *((_QWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) = v11 + 1;
        *(_QWORD *)(v12 + 8 * v11) = v10;
      }
      else
      {
        v9 = *((_QWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) = v8 + 1;
        v10 = *(Caver::Proto::Item **)(v9 + 8 * v8);
      }
      Caver::Item::SaveToProtobufMessage(v7, v10);
      v3 = sub_54C6A0(v3);
    }
    while ( v4 != (char *)v3 );
  }
  v13 = (Caver::Skill **)*((_QWORD *)this + 6);
  for ( i = (Caver::Skill **)*((_QWORD *)this + 7); i != v13; v13 += 2 )
  {
    v15 = *((_DWORD *)a2 + 21);
    v16 = *v13;
    v17 = *((int *)a2 + 20);
    if ( (int)v17 >= v15 )
    {
      if ( v15 == *((_DWORD *)a2 + 22) )
      {
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve((Caver::Proto::GameData *)((char *)a2 + 72), v15 + 1);
        v15 = *((_DWORD *)a2 + 21);
      }
      *((_DWORD *)a2 + 21) = v15 + 1;
      v19 = (Caver::Proto::Skill *)operator new(0x38u);
      Caver::Proto::Skill::Skill(v19);
      v20 = *((int *)a2 + 20);
      v21 = *((_QWORD *)a2 + 9);
      *((_DWORD *)a2 + 20) = v20 + 1;
      *(_QWORD *)(v21 + 8 * v20) = v19;
    }
    else
    {
      v18 = *((_QWORD *)a2 + 9);
      *((_DWORD *)a2 + 20) = v17 + 1;
      v19 = *(Caver::Proto::Skill **)(v18 + 8 * v17);
    }
    Caver::Skill::SaveToProtobufMessage(v16, v19);
  }
  v22 = (Caver::Quest **)*((_QWORD *)this + 17);
  for ( j = (Caver::Quest **)*((_QWORD *)this + 18); j != v22; v22 += 2 )
  {
    v24 = *((_DWORD *)a2 + 35);
    v25 = *v22;
    v26 = *((int *)a2 + 34);
    if ( (int)v26 >= v24 )
    {
      if ( v24 == *((_DWORD *)a2 + 36) )
      {
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve((Caver::Proto::GameData *)((char *)a2 + 128), v24 + 1);
        v24 = *((_DWORD *)a2 + 35);
      }
      *((_DWORD *)a2 + 35) = v24 + 1;
      v28 = (Caver::Proto::Quest *)operator new(0x38u);
      Caver::Proto::Quest::Quest(v28);
      v29 = *((int *)a2 + 34);
      v30 = *((_QWORD *)a2 + 16);
      *((_DWORD *)a2 + 34) = v29 + 1;
      *(_QWORD *)(v30 + 8 * v29) = v28;
    }
    else
    {
      v27 = *((_QWORD *)a2 + 16);
      *((_DWORD *)a2 + 34) = v26 + 1;
      v28 = *(Caver::Proto::Quest **)(v27 + 8 * v26);
    }
    Caver::Quest::SaveToProtobufMessage(v25, v28);
  }
  for ( k = (_QWORD *)*((_QWORD *)this + 23); (_QWORD *)((char *)this + 168) != k; k = (_QWORD *)sub_54C6A0(k) )
  {
    v32 = *((_DWORD *)a2 + 49);
    v33 = (Caver::EntityClass *)k[5];
    v34 = *((int *)a2 + 48);
    if ( (int)v34 >= v32 )
    {
      if ( v32 == *((_DWORD *)a2 + 50) )
      {
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve((Caver::Proto::GameData *)((char *)a2 + 184), v32 + 1);
        v32 = *((_DWORD *)a2 + 49);
      }
      *((_DWORD *)a2 + 49) = v32 + 1;
      v36 = (Caver::Proto::EntityClass *)operator new(0x30u);
      Caver::Proto::EntityClass::EntityClass(v36);
      v37 = *((int *)a2 + 48);
      v38 = *((_QWORD *)a2 + 23);
      *((_DWORD *)a2 + 48) = v37 + 1;
      *(_QWORD *)(v38 + 8 * v37) = v36;
    }
    else
    {
      v35 = *((_QWORD *)a2 + 23);
      *((_DWORD *)a2 + 48) = v34 + 1;
      v36 = *(Caver::Proto::EntityClass **)(v35 + 8 * v34);
    }
    Caver::EntityClass::SaveToProtobufMessage(v33, v36);
  }
  v39 = *((_QWORD *)this + 26);
  for ( m = *((_QWORD *)this + 27); m != v39; v39 += 16 )
  {
    v41 = *((_DWORD *)a2 + 63);
    v42 = *((_DWORD *)a2 + 62);
    if ( v42 >= v41 )
    {
      if ( v41 == *((_DWORD *)a2 + 64) )
      {
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve((Caver::Proto::GameData *)((char *)a2 + 240), v41 + 1);
        v41 = *((_DWORD *)a2 + 63);
      }
      *((_DWORD *)a2 + 63) = v41 + 1;
      v43 = (Caver::Proto::GuideTarget *)operator new(0x78u);
      Caver::Proto::GuideTarget::GuideTarget(v43);
      v44 = *((int *)a2 + 62);
      v45 = *((_QWORD *)a2 + 30);
      *((_DWORD *)a2 + 62) = v44 + 1;
      *(_QWORD *)(v45 + 8 * v44) = v43;
    }
    else
    {
      *((_DWORD *)a2 + 62) = v42 + 1;
    }
    Caver::GuideTarget::SaveToProtobufMessage();
  }
}

