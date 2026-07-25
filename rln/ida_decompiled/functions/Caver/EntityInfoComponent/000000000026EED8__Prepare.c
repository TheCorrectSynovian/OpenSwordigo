/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026EED8
 * Mangled: _ZN5Caver19EntityInfoComponent7PrepareEv
 * Demangled: Caver::EntityInfoComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6960  Caver::GameData::EntityClassForName(std::string const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F92A0  Caver::SceneObject::GetComponentsWithInterface<Caver::EntityInfoComponent>(std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>> *)
 *   0x00000000001FBAC0  Caver::MapNode::ExperienceLevel(void)
 *   0x00000000001FD500  Caver::EntityInfoComponent::ApplyToObject(Caver::SceneObject *)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000026F200  Caver::SceneObject::GetComponentsWithInterface<Caver::EntityInfoComponent>(std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>> *)
 *   0x000000000026F808  Caver::EntityInfoComponent::className(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 57
 *   insn=0x000000000026EEEC string=0x000000000026EEF0 "V"
 *   insn=0x000000000026EF04 string=0x000000000026EF08 "`"
 *   insn=0x000000000026EF10 string=0x000000000026EF14 "h"
 *   insn=0x000000000026EF10 string=0x00000000001F92A0 "0'"
 *   insn=0x000000000026EF14 string=0x000000000026EF18 ""
 *   insn=0x000000000026EF24 string=0x000000000026EF28 "a"
 *   insn=0x000000000026EF30 string=0x00000000001F6960 "0'"
 *   insn=0x000000000026EF38 string=0x000000000026EF3C "\n"
 *   insn=0x000000000026EF38 string=0x000000000026EF48 "tF@"
 *   insn=0x000000000026EF3C string=0x000000000026EF40 "J"
 *   insn=0x000000000026EF40 string=0x000000000026EF44 "\n"
 *   insn=0x000000000026EF48 string=0x000000000026EF4C "i""
 *   insn=0x000000000026EF4C string=0x000000000026EF50 "4"
 *   insn=0x000000000026EF54 string=0x000000000026EF58 ""
 *   insn=0x000000000026EF64 string=0x000000000026EF68 "\t@"
 *   insn=0x000000000026EF74 string=0x000000000026EF78 ""
 *   insn=0x000000000026EF84 string=0x000000000026EF88 "@"
 *   insn=0x000000000026EF94 string=0x000000000026EF98 "4"
 *   insn=0x000000000026EF9C string=0x000000000026EFA0 ""
 *   insn=0x000000000026EFAC string=0x000000000026EFB0 "\t@"
 *   insn=0x000000000026EFBC string=0x000000000026EFC0 ""
 *   insn=0x000000000026EFCC string=0x000000000026EFD0 "@"
 *   insn=0x000000000026EFEC string=0x000000000026EFF0 "\t@"
 *   insn=0x000000000026EFFC string=0x000000000026F000 ""
 *   insn=0x000000000026F00C string=0x000000000026F010 "@"
 *   insn=0x000000000026F01C string=0x000000000026F098 "a"
 *   insn=0x000000000026F02C string=0x000000000026F030 ""
 *   insn=0x000000000026F04C string=0x000000000026F050 "`"
 *   insn=0x000000000026F04C string=0x00000000001FBAC0 "0'"
 *   insn=0x000000000026F050 string=0x000000000026F054 "7"
 *   insn=0x000000000026F058 string=0x000000000026F05C ""
 *   insn=0x000000000026F068 string=0x000000000026F06C "\t@"
 *   insn=0x000000000026F078 string=0x000000000026F07C ""
 *   insn=0x000000000026F088 string=0x000000000026F08C "@"
 *   insn=0x000000000026F0A0 string=0x000000000026F0A4 "h"
 *   insn=0x000000000026F0A0 string=0x00000000001FD500 "0'"
 *   insn=0x000000000026F0B4 string=0x000000000026F0B8 "+"
 *   insn=0x000000000026F0D4 string=0x000000000026F0D8 "BE"
 *   insn=0x000000000026F0FC string=0x000000000026F100 "h"
 *   insn=0x000000000026F104 string=0x000000000026F108 "@"
 *   insn=0x000000000026F108 string=0x000000000026F10C "i "
 *   insn=0x000000000026F10C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000026F11C string=0x000000000026F138 "f"
 *   insn=0x000000000026F138 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000026F140 string=0x000000000026F144 "T"
 *   insn=0x000000000026F148 string=0x000000000026F14C ""
 *   insn=0x000000000026F158 string=0x000000000026F15C "\t@"
 *   insn=0x000000000026F168 string=0x000000000026F16C ""
 *   insn=0x000000000026F178 string=0x000000000026F17C "@"
 *   insn=0x000000000026F194 string=0x000000000026F198 ""
 *   insn=0x000000000026F19C string=0x000000000026F1A0 "a"
 *   insn=0x000000000026F1A4 string=0x000000000026F1A8 "\t@"
 *   insn=0x000000000026F1B4 string=0x000000000026F1B8 ""
 *   insn=0x000000000026F1BC string=0x000000000026F1C0 "a"
 *   insn=0x000000000026F1C4 string=0x000000000026F1C8 "@"
 *   insn=0x000000000026F1EC string=0x000000000026F1F0 "@"
 *   insn=0x000000000026F1F0 string=0x000000000026F1F4 "/ "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityInfoComponent::Prepare(Caver::EntityInfoComponent *this)
{
  __int64 v2; // x23
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x20
  Caver::MapNode *v9; // x21
  __int64 v10; // x8
  _QWORD *v11; // x20
  char v12; // w23
  int v13; // w0
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x23
  __int64 v17; // x24
  Caver::SceneObject *v18; // x21
  __int64 v19; // [xsp+0h] [xbp-60h]
  _QWORD *v20; // [xsp+8h] [xbp-58h]

  _ReadStatusReg(TPIDR_EL0);
  Caver::SceneObject::GetComponentsWithInterface<Caver::EntityInfoComponent>();
  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 32LL) + 16LL);
  if ( !v2 )
    goto LABEL_32;
  Caver::GameData::EntityClassForName();
  if ( v20 )
    ++v20[1];
  v3 = (_QWORD *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 16) = v19;
  *((_QWORD *)this + 17) = v20;
  if ( v3 )
  {
    v4 = v3[1] - 1LL;
    v3[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v5 = v3[2] - 1LL;
      v3[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  if ( v20 )
  {
    v6 = v20[1] - 1LL;
    v20[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)())(*v20 + 16LL))();
      v7 = v20[2] - 1LL;
      v20[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)())(*v20 + 24LL))();
    }
  }
  v9 = *(Caver::MapNode **)(v2 + 368);
  v8 = *(_QWORD **)(v2 + 376);
  if ( v8 )
  {
    if ( !v8[1] )
    {
      (*(void (__fastcall **)(_QWORD))(*v8 + 16LL))(*(_QWORD *)(v2 + 376));
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
    if ( !v9 )
      goto LABEL_26;
    v9 = *(Caver::MapNode **)(v2 + 368);
    v11 = *(_QWORD **)(v2 + 376);
    if ( v11 )
    {
      v12 = 0;
      ++v11[1];
LABEL_22:
      Caver::MapNode::ExperienceLevel(v9);
      *((_DWORD *)this + 36) = v13;
      if ( (v12 & 1) == 0 )
      {
        v14 = v11[1] - 1LL;
        v11[1] = v14;
        if ( !v14 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
          v15 = v11[2] - 1LL;
          v11[2] = v15;
          if ( !v15 )
            (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
        }
      }
      goto LABEL_26;
    }
LABEL_21:
    v12 = 1;
    goto LABEL_22;
  }
  if ( v9 )
  {
    v11 = 0;
    goto LABEL_21;
  }
LABEL_26:
  Caver::EntityInfoComponent::ApplyToObject(this, *((Caver::SceneObject **)this + 5));
  v16 = *(_QWORD *)(*((_QWORD *)this + 5) + 56LL);
  if ( v16 && *(int *)(v16 + 56) >= 1 )
  {
    v17 = 0;
    do
    {
      v18 = *(Caver::SceneObject **)(*(_QWORD *)(v16 + 64) + 8 * v17);
      if ( !Caver::SceneObject::ComponentWithInterface(v18, (__int64)Caver::EntityInfoComponent::Interface) )
        Caver::EntityInfoComponent::ApplyToObject(this, v18);
      ++v17;
    }
    while ( v17 < *(int *)(v16 + 56) );
  }
LABEL_32:
  *((_BYTE *)this + 112) = 1;
}

