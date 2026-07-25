/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025DB5C
 * Mangled: _ZN5Caver23CharControllerComponent26UpdatePickupObjectPositionEv
 * Demangled: Caver::CharControllerComponent::UpdatePickupObjectPosition(void)
 *
 * Callers: 1
 *   0x00000000001F7160  Caver::CharControllerComponent::UpdatePickupObjectPosition(void)
 *
 * Callees: 3
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE680  Caver::CharControllerComponent::TargetPickupObjectPosition(void)
 *
 * Referenced strings: 28
 *   insn=0x000000000025DB6C string=0x000000000025DB70 "U"
 *   insn=0x000000000025DB78 string=0x000000000025DB7C ")"
 *   insn=0x000000000025DB7C string=0x000000000025DB80 "!QG"
 *   insn=0x000000000025DB84 string=0x000000000025DB88 "`"
 *   insn=0x000000000025DB8C string=0x000000000025DB90 "M"
 *   insn=0x000000000025DB90 string=0x000000000025DB94 "tNA"
 *   insn=0x000000000025DB90 string=0x000000000025DBB8 "tNA"
 *   insn=0x000000000025DB9C string=0x000000000025DBA0 "v"
 *   insn=0x000000000025DBC4 string=0x000000000025DBC8 "`"
 *   insn=0x000000000025DBC8 string=0x000000000025DBCC "b"
 *   insn=0x000000000025DBCC string=0x000000000025DBD0 "c"
 *   insn=0x000000000025DBD8 string=0x000000000025DBDC " 8 "
 *   insn=0x000000000025DBE0 string=0x000000000025DBE4 "("
 *   insn=0x000000000025DBE4 string=0x000000000025DBE8 "E "
 *   insn=0x000000000025DBFC string=0x000000000025DC00 "!"
 *   insn=0x000000000025DC00 string=0x000000000025DC04 "  ""
 *   insn=0x000000000025DC04 string=0x000000000025DC08 "a($"
 *   insn=0x000000000025DC10 string=0x000000000025DC14 "#8#"
 *   insn=0x000000000025DC14 string=0x000000000025DC18 "c"
 *   insn=0x000000000025DC18 string=0x000000000025DC1C "` ""
 *   insn=0x000000000025DC1C string=0x000000000025DC20 "\t"
 *   insn=0x000000000025DC20 string=0x000000000025DC40 "h"
 *   insn=0x000000000025DC30 string=0x000000000025DC34 "[`"
 *   insn=0x000000000025DC34 string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000025DC40 string=0x000000000025DC44 "iNA"
 *   insn=0x000000000025DC44 string=0x000000000025DC48 "5@"
 *   insn=0x000000000025DC48 string=0x000000000025DC4C "(5"
 *   insn=0x000000000025DC74 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::CharControllerComponent::UpdatePickupObjectPosition(Caver::CharControllerComponent *this)
{
  float32x2_t *v2; // x20
  __int64 v3; // x20
  __int64 *result; // x0
  float v5; // s0
  float v6; // s3
  float v7; // s0
  float v8; // s1
  int v9; // w8
  __int64 v10; // [xsp+8h] [xbp-38h] BYREF
  float32x2_t v11[2]; // [xsp+10h] [xbp-30h] BYREF

  v11[1] = *(float32x2_t *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((float *)this + 185) > 100000.0 )
  {
    v2 = (float32x2_t *)*((_QWORD *)this + 83);
    Caver::CharControllerComponent::TargetPickupObjectPosition((__int64 *)v11, this);
    *(float32x2_t *)((char *)this + 740) = vsub_f32(v2[14], v11[0]);
  }
  v3 = *((_QWORD *)this + 83);
  result = Caver::CharControllerComponent::TargetPickupObjectPosition(&v10, this);
  v5 = 1.0 - *((float *)this + 181);
  v6 = v5 * *((float *)this + 186);
  v7 = (float)(*((float *)this + 185) * v5) + *(float *)&v10;
  v8 = v6 + *((float *)&v10 + 1);
  if ( fabsf(v7 - *(float *)(v3 + 112)) > 0.0001 || fabsf(v8 - *(float *)(v3 + 116)) > 0.0001 )
  {
    v9 = *(unsigned __int8 *)(v3 + 180);
    *(float *)(v3 + 112) = v7;
    *(float *)(v3 + 116) = v8;
    if ( !v9 )
    {
      result = (__int64 *)Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v3);
      *(_BYTE *)(v3 + 180) = 1;
    }
  }
  *(_QWORD *)(*((_QWORD *)this + 83) + 104LL) = *(_QWORD *)(*((_QWORD *)this + 5) + 104LL);
  return result;
}

