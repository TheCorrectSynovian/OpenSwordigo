/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021A3FC
 * Mangled: _ZN5Caver23CollisionShapeComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::CollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F3DC0  Caver::CollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 8
 *   0x00000000001F4540  Caver::BindingValue::ProgramValue(void)
 *   0x00000000001F46B0  Caver::ShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 126
 *   insn=0x000000000021A40C string=0x000000000021A410 "U"
 *   insn=0x000000000021A414 string=0x000000000021A418 "( "
 *   insn=0x000000000021A424 string=0x000000000021A428 ""
 *   insn=0x000000000021A428 string=0x000000000021A42C "I"
 *   insn=0x000000000021A42C string=0x000000000021A434 "(y"
 *   insn=0x000000000021A42C string=0x00000000005839CC "tj"
 *   insn=0x000000000021A434 string=0x000000000021A438 ""
 *   insn=0x000000000021A43C string=0x000000000021A440 "H"
 *   insn=0x000000000021A43C string=0x000000000021A558 "H"
 *   insn=0x000000000021A43C string=0x000000000021A644 "H"
 *   insn=0x000000000021A43C string=0x000000000021A738 "H"
 *   insn=0x000000000021A43C string=0x000000000021A754 "H"
 *   insn=0x000000000021A43C string=0x000000000021A764 "H"
 *   insn=0x000000000021A43C string=0x000000000021A774 "H"
 *   insn=0x000000000021A43C string=0x000000000021A784 "H"
 *   insn=0x000000000021A43C string=0x000000000021A794 "H"
 *   insn=0x000000000021A43C string=0x000000000021A7A4 "H"
 *   insn=0x000000000021A440 string=0x000000000021A444 "i"
 *   insn=0x000000000021A444 string=0x000000000021A448 ""
 *   insn=0x000000000021A450 string=0x000000000021A454 "h"
 *   insn=0x000000000021A458 string=0x000000000021A45C "s"
 *   insn=0x000000000021A45C string=0x000000000021A460 "h"
 *   insn=0x000000000021A460 string=0x000000000021A464 "h"
 *   insn=0x000000000021A468 string=0x000000000021A46C "Mn"
 *   insn=0x000000000021A46C string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000021A470 string=0x000000000021A474 "h"
 *   insn=0x000000000021A480 string=0x000000000021A484 "/h"
 *   insn=0x000000000021A484 string=0x000000000021A488 "`B"
 *   insn=0x000000000021A484 string=0x00000000001F4540 "P'"
 *   insn=0x000000000021A498 string=0x000000000021A49C "\n"
 *   insn=0x000000000021A498 string=0x000000000021A4A8 "tR@"
 *   insn=0x000000000021A49C string=0x000000000021A4A0 "J"
 *   insn=0x000000000021A4A0 string=0x000000000021A4A4 "\n"
 *   insn=0x000000000021A4A8 string=0x000000000021A4AC "i"
 *   insn=0x000000000021A4AC string=0x000000000021A4B0 "4"
 *   insn=0x000000000021A4B4 string=0x000000000021A4B8 ""
 *   insn=0x000000000021A4C4 string=0x000000000021A4C8 "\t@"
 *   insn=0x000000000021A4D4 string=0x000000000021A4D8 ""
 *   insn=0x000000000021A4E4 string=0x000000000021A4E8 "@"
 *   insn=0x000000000021A4F8 string=0x000000000021A4FC "\n"
 *   insn=0x000000000021A4F8 string=0x000000000021A508 "tZ@"
 *   insn=0x000000000021A4FC string=0x000000000021A500 "J"
 *   insn=0x000000000021A500 string=0x000000000021A504 "\n"
 *   insn=0x000000000021A508 string=0x000000000021A50C "i"
 *   insn=0x000000000021A514 string=0x000000000021A518 ""
 *   insn=0x000000000021A51C string=0x000000000021A520 "a"
 *   insn=0x000000000021A524 string=0x000000000021A528 "\t@"
 *   insn=0x000000000021A534 string=0x000000000021A538 ""
 *   insn=0x000000000021A53C string=0x000000000021A540 "a"
 *   insn=0x000000000021A544 string=0x000000000021A548 "@"
 *   insn=0x000000000021A550 string=0x000000000021A554 "v"
 *   insn=0x000000000021A558 string=0x000000000021A55C ""
 *   insn=0x000000000021A55C string=0x000000000021A560 "h"
 *   insn=0x000000000021A570 string=0x000000000021A574 "`"
 *   insn=0x000000000021A578 string=0x000000000021A57C "K@"
 *   insn=0x000000000021A584 string=0x000000000021A588 "\n"
 *   insn=0x000000000021A584 string=0x000000000021A594 "tz@"
 *   insn=0x000000000021A588 string=0x000000000021A58C "J"
 *   insn=0x000000000021A58C string=0x000000000021A590 "\n"
 *   insn=0x000000000021A594 string=0x000000000021A598 "i"
 *   insn=0x000000000021A598 string=0x000000000021A59C "4"
 *   insn=0x000000000021A5A0 string=0x000000000021A5A4 ""
 *   insn=0x000000000021A5B0 string=0x000000000021A5B4 "\t@"
 *   insn=0x000000000021A5C0 string=0x000000000021A5C4 ""
 *   insn=0x000000000021A5D0 string=0x000000000021A5D4 "@"
 *   insn=0x000000000021A5E4 string=0x000000000021A5E8 "\n"
 *   insn=0x000000000021A5E4 string=0x000000000021A5F4 "t"
 *   insn=0x000000000021A5E8 string=0x000000000021A5EC "J"
 *   insn=0x000000000021A5EC string=0x000000000021A5F0 "\n"
 *   insn=0x000000000021A5F4 string=0x000000000021A5F8 "i"
 *   insn=0x000000000021A600 string=0x000000000021A604 ""
 *   insn=0x000000000021A610 string=0x000000000021A614 "\t@"
 *   insn=0x000000000021A620 string=0x000000000021A624 ""
 *   insn=0x000000000021A630 string=0x000000000021A634 "@"
 *   insn=0x000000000021A63C string=0x000000000021A640 ";"
 *   insn=0x000000000021A644 string=0x000000000021A648 ""
 *   insn=0x000000000021A648 string=0x000000000021A64C "h"
 *   insn=0x000000000021A64C string=0x000000000021A650 "X"
 *   insn=0x000000000021A65C string=0x000000000021A660 "`"
 *   insn=0x000000000021A670 string=0x000000000021A674 "\n"
 *   insn=0x000000000021A670 string=0x000000000021A680 "tf@"
 *   insn=0x000000000021A674 string=0x000000000021A678 "J"
 *   insn=0x000000000021A678 string=0x000000000021A67C "\n"
 *   insn=0x000000000021A680 string=0x000000000021A684 "i""
 *   insn=0x000000000021A684 string=0x000000000021A688 "4"
 *   insn=0x000000000021A68C string=0x000000000021A690 ""
 *   insn=0x000000000021A69C string=0x000000000021A6A0 "\t@"
 *   insn=0x000000000021A6AC string=0x000000000021A6B0 ""
 *   insn=0x000000000021A6BC string=0x000000000021A6C0 "@"
 *   insn=0x000000000021A6D0 string=0x000000000021A6D4 "\n"
 *   insn=0x000000000021A6D0 string=0x000000000021A6E0 "tn@"
 *   insn=0x000000000021A6D4 string=0x000000000021A6D8 "J"
 *   insn=0x000000000021A6D8 string=0x000000000021A6DC "\n"
 *   insn=0x000000000021A6E0 string=0x000000000021A6E4 "i""
 *   insn=0x000000000021A6E4 string=0x000000000021A6E8 "4"
 *   insn=0x000000000021A6EC string=0x000000000021A6F0 ""
 *   insn=0x000000000021A6FC string=0x000000000021A700 "\t@"
 *   insn=0x000000000021A70C string=0x000000000021A710 ""
 *   insn=0x000000000021A71C string=0x000000000021A720 "@"
 *   insn=0x000000000021A738 string=0x000000000021A73C ""
 *   insn=0x000000000021A73C string=0x000000000021A740 "h"
 *   insn=0x000000000021A740 string=0x000000000021A744 ""
 *   insn=0x000000000021A74C string=0x00000000001F46B0 "P'"
 *   insn=0x000000000021A754 string=0x000000000021A758 ""
 *   insn=0x000000000021A758 string=0x000000000021A75C "hV"
 *   insn=0x000000000021A764 string=0x000000000021A768 ""
 *   insn=0x000000000021A768 string=0x000000000021A76C "hR"
 *   insn=0x000000000021A774 string=0x000000000021A778 ""
 *   insn=0x000000000021A778 string=0x000000000021A77C "h"
 *   insn=0x000000000021A784 string=0x000000000021A788 ""
 *   insn=0x000000000021A788 string=0x000000000021A78C "h"
 *   insn=0x000000000021A78C string=0x000000000021A790 ""
 *   insn=0x000000000021A794 string=0x000000000021A798 ""
 *   insn=0x000000000021A798 string=0x000000000021A79C "h""
 *   insn=0x000000000021A7A4 string=0x000000000021A7A8 ""
 *   insn=0x000000000021A7A8 string=0x000000000021A7AC "h"
 *   insn=0x000000000021A7D4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021A7E0 string=0x000000000021A7E4 ""
 *   insn=0x000000000021A804 string=0x000000000021A808 "/"
 *   insn=0x000000000021A818 string=0x000000000021A81C "\t"
 *   insn=0x000000000021A81C string=0x000000000021A820 "("
 *   insn=0x000000000021A824 string=0x000000000021A828 "@"
 *   insn=0x000000000021A828 string=0x000000000021A82C ""
 *   insn=0x000000000021A834 string=0x000000000021A838 "h"
 *   insn=0x000000000021A840 string=0x000000000021A844 "Wm"
 *   insn=0x000000000021A848 string=0x000000000021A84C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CollisionShapeComponent::SetValueForBindedProperty(
        Caver::CollisionShapeComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  int v4; // w8
  Caver::SceneObject *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x9
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x9
  _QWORD *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17; // x9
  _QWORD *v18; // x20
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x9
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x9
  _QWORD *v27; // x20
  __int64 v28; // x8
  __int64 v29; // x8
  __int64 v30; // x8
  __int64 v31; // x9
  __int64 v32; // x8
  __int64 v33; // x8
  __int64 v34; // [xsp+20h] [xbp-50h] BYREF
  __int64 v35; // [xsp+28h] [xbp-48h]
  __int64 v36; // [xsp+30h] [xbp-40h]
  __int64 v37; // [xsp+38h] [xbp-38h]
  __int64 v38; // [xsp+40h] [xbp-30h]
  __int64 v39; // [xsp+48h] [xbp-28h]

  v39 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 200:
      v4 = **((unsigned __int8 **)a3 + 1);
      if ( v4 != *((unsigned __int8 *)this + 376) )
      {
        *((_BYTE *)this + 376) = v4;
        if ( v4 )
        {
          v5 = (Caver::SceneObject *)*((_QWORD *)this + 5);
          if ( !*((_BYTE *)v5 + 180) )
          {
            Caver::SceneObject::RegisterForWorldBoundsUpdate(v5);
            *((_BYTE *)v5 + 180) = 1;
          }
        }
      }
      return;
    case 202:
      *((_DWORD *)this + 84) = **((_DWORD **)a3 + 1);
      return;
    case 203:
      *((_DWORD *)this + 85) = **((_DWORD **)a3 + 1);
      return;
    case 204:
      *((_BYTE *)this + 378) = **((_BYTE **)a3 + 1);
      return;
    case 205:
      *((_BYTE *)this + 379) = **((_BYTE **)a3 + 1);
      return;
    case 206:
      *((_BYTE *)this + 380) = **((_BYTE **)a3 + 1);
      return;
    case 207:
      *((_BYTE *)this + 381) = **((_BYTE **)a3 + 1);
      return;
    case 208:
      *((_DWORD *)this + 96) = **((_DWORD **)a3 + 1);
      return;
    case 209:
      *((_DWORD *)this + 97) = **((_DWORD **)a3 + 1);
      return;
    case 210:
      *((_BYTE *)this + 392) = **((_BYTE **)a3 + 1);
      return;
    case 211:
      Caver::BindingValue::ProgramValue(&v34, a3);
      sub_56A6A8((char *)this + 144, &v34);
      v7 = v35;
      v6 = v36;
      if ( v36 )
        ++*(_QWORD *)(v36 + 8);
      v8 = (_QWORD *)*((_QWORD *)this + 20);
      *((_QWORD *)this + 19) = v7;
      *((_QWORD *)this + 20) = v6;
      if ( v8 )
      {
        v9 = v8[1] - 1LL;
        v8[1] = v9;
        if ( !v9 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
          v10 = v8[2] - 1LL;
          v8[2] = v10;
          if ( !v10 )
            (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
        }
      }
      v12 = v37;
      v11 = v38;
      if ( v38 )
        ++*(_QWORD *)(v38 + 8);
      v13 = (_QWORD *)*((_QWORD *)this + 22);
      *((_QWORD *)this + 21) = v12;
      *((_QWORD *)this + 22) = v11;
      if ( !v13 )
        goto LABEL_44;
      v14 = v13[1] - 1LL;
      v13[1] = v14;
      if ( v14 )
        goto LABEL_44;
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      v15 = v13[2] - 1LL;
      v13[2] = v15;
      if ( v15 )
        goto LABEL_44;
      goto LABEL_43;
    case 212:
      Caver::BindingValue::ProgramValue(&v34, a3);
      sub_56A6A8((char *)this + 184, &v34);
      v26 = v35;
      v25 = v36;
      if ( v36 )
        ++*(_QWORD *)(v36 + 8);
      v27 = (_QWORD *)*((_QWORD *)this + 25);
      *((_QWORD *)this + 24) = v26;
      *((_QWORD *)this + 25) = v25;
      if ( v27 )
      {
        v28 = v27[1] - 1LL;
        v27[1] = v28;
        if ( !v28 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
          v29 = v27[2] - 1LL;
          v27[2] = v29;
          if ( !v29 )
            (*(void (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
        }
      }
      v31 = v37;
      v30 = v38;
      if ( v38 )
        ++*(_QWORD *)(v38 + 8);
      v13 = (_QWORD *)*((_QWORD *)this + 27);
      *((_QWORD *)this + 26) = v31;
      *((_QWORD *)this + 27) = v30;
      if ( v13 )
      {
        v32 = v13[1] - 1LL;
        v13[1] = v32;
        if ( !v32 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
          v33 = v13[2] - 1LL;
          v13[2] = v33;
          if ( !v33 )
            goto LABEL_43;
        }
      }
      goto LABEL_44;
    case 213:
      Caver::BindingValue::ProgramValue(&v34, a3);
      sub_56A6A8((char *)this + 224, &v34);
      v17 = v35;
      v16 = v36;
      if ( v36 )
        ++*(_QWORD *)(v36 + 8);
      v18 = (_QWORD *)*((_QWORD *)this + 30);
      *((_QWORD *)this + 29) = v17;
      *((_QWORD *)this + 30) = v16;
      if ( v18 )
      {
        v19 = v18[1] - 1LL;
        v18[1] = v19;
        if ( !v19 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
          v20 = v18[2] - 1LL;
          v18[2] = v20;
          if ( !v20 )
            (*(void (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
        }
      }
      v22 = v37;
      v21 = v38;
      if ( v38 )
        ++*(_QWORD *)(v38 + 8);
      v13 = (_QWORD *)*((_QWORD *)this + 32);
      *((_QWORD *)this + 31) = v22;
      *((_QWORD *)this + 32) = v21;
      if ( v13 )
      {
        v23 = v13[1] - 1LL;
        v13[1] = v23;
        if ( !v23 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
          v24 = v13[2] - 1LL;
          v13[2] = v24;
          if ( !v24 )
LABEL_43:
            (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
        }
      }
LABEL_44:
      Caver::Program::~Program((Caver::Program *)&v34);
      break;
    default:
      Caver::ShapeComponent::SetValueForBindedProperty(this, a2, a3);
      break;
  }
}

