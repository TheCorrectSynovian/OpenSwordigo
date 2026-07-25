/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000296230
 * Mangled: _ZN5Caver34ChargingMonsterControllerComponent13StartChargingEv
 * Demangled: Caver::ChargingMonsterControllerComponent::StartCharging(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 17
 *   insn=0x000000000029623C string=0x0000000000296240 "h"
 *   insn=0x0000000000296244 string=0x0000000000296248 "`~@"
 *   insn=0x000000000029624C string=0x0000000000296250 "`"
 *   insn=0x000000000029624C string=0x0000000000296264 ""
 *   insn=0x0000000000296254 string=0x0000000000296258 """
 *   insn=0x0000000000296258 string=0x000000000029625C "`~@"
 *   insn=0x0000000000296258 string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000296264 string=0x0000000000296268 ""
 *   insn=0x0000000000296270 string=0x0000000000296274 "`~@"
 *   insn=0x0000000000296278 string=0x000000000029627C "`"
 *   insn=0x0000000000296278 string=0x000000000029628C ""
 *   insn=0x0000000000296284 string=0x0000000000296288 "`~@"
 *   insn=0x000000000029628C string=0x0000000000296290 ""
 *   insn=0x0000000000296298 string=0x000000000029629C "h"
 *   insn=0x00000000002962AC string=0x00000000002962B0 "h"
 *   insn=0x00000000002962B0 string=0x00000000002962B4 "\tY"
 *   insn=0x00000000002962B4 string=0x00000000002962B8 "jb"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ChargingMonsterControllerComponent::StartCharging(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x0
  __int64 v3; // x8

  v1 = this;
  if ( !*(_BYTE *)(this + 304) )
  {
    this = *(_QWORD *)(this + 248);
    if ( this
      || (Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v1 + 232), (const Caver::Component *)v1),
          (this = *(_QWORD *)(v1 + 248)) != 0) )
    {
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 264LL))(this);
      if ( this )
      {
        v2 = *(_QWORD *)(v1 + 248);
        if ( !v2 )
        {
          Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v1 + 232), (const Caver::Component *)v1);
          v2 = *(_QWORD *)(v1 + 248);
        }
        this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 264LL))(v2);
        *(_DWORD *)(this + 12) = 0;
        v3 = *(_QWORD *)(v1 + 288);
        *(_DWORD *)(v3 + 32) = 0;
        *(_BYTE *)(v3 + 45) = 0;
        *(_WORD *)(*(_QWORD *)(v1 + 280) + 44LL) = 256;
        *(_WORD *)(v1 + 304) = 1;
        *(_QWORD *)(v1 + 312) = 0;
      }
    }
  }
  return this;
}

