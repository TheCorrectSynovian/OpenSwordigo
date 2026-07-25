/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022EAB8
 * Mangled: _ZN5Caver20OverlayTextComponent20CombatTextFromObjectERKSsRKN5boost13intrusive_ptrINS_11SceneObjectEEERKNS_7Vector3Ef
 * Demangled: Caver::OverlayTextComponent::CombatTextFromObject(std::string const&,boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector3 const&,float)
 *
 * Callers: 1
 *   0x00000000001F90B0  Caver::OverlayTextComponent::CombatTextFromObject(std::string const&,boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector3 const&,float)
 *
 * Callees: 18
 *   0x00000000001F45A0  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B10  Caver::TransformControllerComponent::TransformControllerComponent(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x0000000000200460  Caver::TransformControllerComponent::TranslateBy(Caver::Vector3 const&,float)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000022F364  Caver::OverlayTextComponent::className(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 89
 *   insn=0x000000000022EAD0 string=0x000000000022EAD4 "W"
 *   insn=0x000000000022EAF0 string=0x000000000022EAF4 "v"
 *   insn=0x000000000022EB08 string=0x000000000022EB0C "  "
 *   insn=0x000000000022EB0C string=0x000000000022EB10 "a@"
 *   insn=0x000000000022EB10 string=0x000000000022EB14 "b(""
 *   insn=0x000000000022EB1C string=0x000000000022EB20 "A(!"
 *   insn=0x000000000022EB20 string=0x000000000022EB24 "b"
 *   insn=0x000000000022EB2C string=0x000000000022EB30 "`"
 *   insn=0x000000000022EB40 string=0x000000000022EB44 "#Q"
 *   insn=0x000000000022EB58 string=0x000000000022EB5C "!"
 *   insn=0x000000000022EB5C string=0x000000000022EB60 "  ""
 *   insn=0x000000000022EB6C string=0x000000000022EB70 "\t"
 *   insn=0x000000000022EB7C string=0x000000000022EB80 "#8#"
 *   insn=0x000000000022EB80 string=0x000000000022EB84 "c"
 *   insn=0x000000000022EB84 string=0x000000000022EB88 "` ""
 *   insn=0x000000000022EB88 string=0x000000000022EB8C "I"
 *   insn=0x000000000022EB8C string=0x000000000022EB90 ")"
 *   insn=0x000000000022EB94 string=0x000000000022EB98 "\t"
 *   insn=0x000000000022EBA4 string=0x000000000022EBA8 "~"
 *   insn=0x000000000022EBA8 string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000022EBB4 string=0x000000000022EBB8 "`"
 *   insn=0x000000000022EBC8 string=0x000000000022EBCC " "
 *   insn=0x000000000022EBD0 string=0x000000000022EBD4 "( "
 *   insn=0x000000000022EBE0 string=0x000000000022EBE4 "h"
 *   insn=0x000000000022EBE4 string=0x000000000022EBE8 "i"
 *   insn=0x000000000022EBE8 string=0x000000000022EBEC "`^"
 *   insn=0x000000000022EBF0 string=0x000000000022EBF4 "{"
 *   insn=0x000000000022EBF4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000022EBFC string=0x000000000022EC00 "`"
 *   insn=0x000000000022EBFC string=0x00000000001F6B10 "0'"
 *   insn=0x000000000022EC04 string=0x000000000022EC08 "f"
 *   insn=0x000000000022EC08 string=0x00000000001F45A0 "P'"
 *   insn=0x000000000022EC2C string=0x000000000022EC30 "i"
 *   insn=0x000000000022EC34 string=0x000000000022EC38 ""
 *   insn=0x000000000022EC38 string=0x000000000022EC3C ""
 *   insn=0x000000000022EC44 string=0x000000000022EC48 "*\t@"
 *   insn=0x000000000022EC48 string=0x000000000022EC4C "J"
 *   insn=0x000000000022EC4C string=0x000000000022EC50 "*\t"
 *   insn=0x000000000022EC60 string=0x000000000022EC64 "@"
 *   insn=0x000000000022EC64 string=0x000000000022EC68 ""
 *   insn=0x000000000022EC68 string=0x000000000022EC6C ""
 *   insn=0x000000000022EC70 string=0x000000000022EC74 ""
 *   insn=0x000000000022EC74 string=0x000000000022EC78 ""
 *   insn=0x000000000022ECA8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000022ECB0 string=0x000000000022ECB4 "("
 *   insn=0x000000000022ECB4 string=0x000000000022ECB8 "\t\t@"
 *   insn=0x000000000022ECB8 string=0x000000000022ECBC ")"
 *   insn=0x000000000022ECBC string=0x000000000022ECC0 "\t\t"
 *   insn=0x000000000022ECC4 string=0x000000000022ECC8 "\t"
 *   insn=0x000000000022ECC8 string=0x000000000022ECCC ")"
 *   insn=0x000000000022ECD0 string=0x000000000022ECD4 " "
 *   insn=0x000000000022ECE8 string=0x000000000022ECEC "q!"
 *   insn=0x000000000022ECEC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000022ED08 string=0x000000000022ED0C "U"
 *   insn=0x000000000022ED18 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000022ED24 string=0x000000000022ED28 "`"
 *   insn=0x000000000022ED24 string=0x00000000001FC790 "0'"
 *   insn=0x000000000022ED4C string=0x000000000022ED50 "!"
 *   insn=0x000000000022ED54 string=0x000000000022ED58 ""F"
 *   insn=0x000000000022ED60 string=0x000000000022ED64 "`"
 *   insn=0x000000000022ED68 string=0x000000000022ED6C "O"
 *   insn=0x000000000022ED70 string=0x000000000022ED74 "h"
 *   insn=0x000000000022ED7C string=0x000000000022ED80 ")"
 *   insn=0x000000000022ED88 string=0x000000000022ED8C "a"
 *   insn=0x000000000022ED9C string=0x000000000022EDFC "5"
 *   insn=0x000000000022EDB8 string=0x000000000022EDBC ")=G"
 *   insn=0x000000000022EDBC string=0x000000000022EDC0 "!"
 *   insn=0x000000000022EDC4 string=0x000000000022EDC8 "\t"
 *   insn=0x000000000022EDC4 string=0x000000000022EDDC "\t"
 *   insn=0x000000000022EDC8 string=0x000000000022EDCC "*"
 *   insn=0x000000000022EDCC string=0x000000000022EDD0 "\n"
 *   insn=0x000000000022EDD8 string=0x000000000022EDE8 "?"
 *   insn=0x000000000022EDDC string=0x000000000022EDE0 "*"
 *   insn=0x000000000022EDE0 string=0x000000000022EDE4 "\n"
 *   insn=0x000000000022EDE8 string=0x000000000022EDEC ","
 *   insn=0x000000000022EDF0 string=0x000000000022EDF4 "l"
 *   insn=0x000000000022EE04 string=0x000000000022EE08 "J"
 *   insn=0x000000000022EE0C string=0x000000000022EE10 "(a"
 *   insn=0x000000000022EE1C string=0x000000000022EE20 "J=G"
 *   insn=0x000000000022EE20 string=0x000000000022EE24 ")!"
 *   insn=0x000000000022EE28 string=0x000000000022EE2C "*"
 *   insn=0x000000000022EE28 string=0x000000000022EE58 "*"
 *   insn=0x000000000022EE2C string=0x000000000022EE30 "K"
 *   insn=0x000000000022EE30 string=0x000000000022EE34 "+"
 *   insn=0x000000000022EE38 string=0x000000000022EE3C "_"
 *   insn=0x000000000022EE48 string=0x000000000022EE4C "V"
 *   insn=0x000000000022EE58 string=0x000000000022EE5C "K"
 *   insn=0x000000000022EE5C string=0x000000000022EE60 "+"
 *   insn=0x000000000022EE60 string=0x000000000022EE64 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayTextComponent::CombatTextFromObject(
        __int64 a1,
        float a2,
        __int64 a3,
        __int64 a4,
        float32x2_t *a5)
{
  __int64 v7; // x22
  float32x2_t v8; // d3
  float v9; // s1
  float v10; // w9
  float *v11; // x8
  Caver::TransformControllerComponent *v12; // x21
  unsigned __int64 v13; // x9
  void (*v14)(void); // x8
  __int64 result; // x0
  int v16; // w8
  unsigned __int64 v18; // [xsp+58h] [xbp-50h] BYREF
  float v19; // [xsp+60h] [xbp-48h]
  float v20; // [xsp+68h] [xbp-40h] BYREF
  float v21; // [xsp+6Ch] [xbp-3Ch]
  __int64 v22; // [xsp+70h] [xbp-38h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = *(_QWORD *)(a1 + 40);
  v8.n64_u32[0] = *(_DWORD *)(*(_QWORD *)a4 + 112LL);
  v9 = (float)(*(float *)(*(_QWORD *)a4 + 120LL) + 0.0) + a5[1].n64_f32[0];
  v8.n64_f32[1] = *(float *)(*(_QWORD *)a4 + 168LL) + (float)(*(float *)(*(_QWORD *)a4 + 176LL) * 0.5);
  v18 = vadd_f32(vadd_f32(v8, 0), (float32x2_t)a5->n64_u64[0]).n64_u64[0];
  v19 = v9;
  Caver::Vector2::Vector2((Caver::Vector2 *)&v20, (const Caver::Vector3 *)&v18);
  if ( fabsf(v20 - *(float *)(v7 + 112)) <= 0.0001 )
  {
    v11 = (float *)(v7 + 116);
    if ( fabsf(v21 - *(float *)(v7 + 116)) <= 0.0001 )
      goto LABEL_7;
    v10 = v21;
  }
  else
  {
    v10 = v21;
    v11 = (float *)(v7 + 116);
  }
  *(float *)(v7 + 112) = v20;
  *v11 = v10;
  if ( !*(_BYTE *)(v7 + 180) )
  {
    Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v7);
    *(_BYTE *)(v7 + 180) = 1;
  }
LABEL_7:
  *(float *)(v7 + 120) = v19;
  sub_56A6A8(a1 + 112);
  *(_WORD *)(a1 + 128) = 257;
  *(_BYTE *)(a1 + 176) = 1;
  *(float32x2_t *)(a1 + 184) = vmul_n_f32((float32x2_t)0x3F19999A3E4CCCCDLL, a2);
  *(_DWORD *)(a1 + 180) = 0;
  v12 = (Caver::TransformControllerComponent *)operator new(0xC0u);
  Caver::TransformControllerComponent::TransformControllerComponent(v12);
  Caver::SceneObject::AddComponent(*(Caver::SceneObject **)(a1 + 40), v12);
  v19 = 0.0;
  v18 = 0x42C8000000000000LL;
  Caver::TransformControllerComponent::TranslateBy(v12, (const Caver::Vector3 *)&v18, a2);
  v13 = *(_QWORD *)(a1 + 40);
  v14 = *(void (**)(void))(**(_QWORD **)(*(_QWORD *)a4 + 32LL) + 40LL);
  v18 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v14();
  result = v18;
  if ( v18 )
  {
    v16 = *(_DWORD *)(v18 + 8) - 1;
    *(_DWORD *)(v18 + 8) = v16;
    if ( !v16 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

