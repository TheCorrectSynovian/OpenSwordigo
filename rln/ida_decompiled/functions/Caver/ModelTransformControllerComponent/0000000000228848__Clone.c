/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000228848
 * Mangled: _ZNK5Caver33ModelTransformControllerComponent5CloneEv
 * Demangled: Caver::ModelTransformControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000228710  Caver::ModelTransformControllerComponent::~ModelTransformControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A50  Caver::ModelTransformControllerComponent::ModelTransformControllerComponent(void)
 *   0x00000000002288B8  Caver::ModelTransformControllerComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x0000000000228858 string=0x000000000022885C "a3"
 *   insn=0x000000000022885C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000228860 string=0x0000000000228864 "{<"
 *   insn=0x0000000000228864 string=0x0000000000228868 "h"@"
 *   insn=0x0000000000228864 string=0x00000000001F7A50 "0'"
 *   insn=0x0000000000228868 string=0x000000000022886C "a"
 *   insn=0x0000000000228878 string=0x000000000022887C "hz@"
 *   insn=0x0000000000228888 string=0x000000000022888C "`"
 *   insn=0x0000000000228890 string=0x0000000000228894 "`"
 *   insn=0x00000000002288AC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::ModelTransformControllerComponent::Clone(Caver::ModelTransformControllerComponent *this)
{
  __int64 v2; // x20
  long double result; // q0

  v2 = operator new(0xB0u);
  Caver::ModelTransformControllerComponent::ModelTransformControllerComponent((Caver::ModelTransformControllerComponent *)v2);
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  *(_DWORD *)(v2 + 120) = *((_DWORD *)this + 30);
  *(_OWORD *)(v2 + 140) = *(_OWORD *)((char *)this + 140);
  result = *(long double *)((char *)this + 156);
  *(long double *)(v2 + 156) = result;
  return result;
}

