/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000268C2C
 * Mangled: _ZN5Caver15EntityComponent7PrepareEv
 * Demangled: Caver::EntityComponent::Prepare(void)
 *
 * Callers: 1
 *   0x00000000001F8330  Caver::EntityComponent::Prepare(void)
 *
 * Callees: 2
 *   0x0000000000200BE0  Caver::EntityComponent::RegisterLibrary(void)
 *   0x0000000000215A90  Caver::CollisionShapeComponent::Interface(void)
 *
 * Referenced strings: 17
 *   insn=0x0000000000268C44 string=0x0000000000268C48 "ir@"
 *   insn=0x0000000000268C50 string=0x0000000000268C54 "h"
 *   insn=0x0000000000268C50 string=0x0000000000268C68 "h"
 *   insn=0x0000000000268C54 string=0x0000000000268C58 "ir"
 *   insn=0x0000000000268C58 string=0x0000000000268C5C ")}"
 *   insn=0x0000000000268C5C string=0x0000000000268C60 "\tA"
 *   insn=0x0000000000268C64 string=0x0000000000268C6C "h>"
 *   insn=0x0000000000268C74 string=0x0000000000268C78 "`"
 *   insn=0x0000000000268C80 string=0x0000000000268C84 ""
 *   insn=0x0000000000268C84 string=0x0000000000268C88 "s"
 *   insn=0x0000000000268C90 string=0x0000000000268C94 ""
 *   insn=0x0000000000268C94 string=0x0000000000268C98 "Q@"
 *   insn=0x0000000000268CA4 string=0x0000000000268CA8 "\t"
 *   insn=0x0000000000268CA8 string=0x0000000000268CAC "i"
 *   insn=0x0000000000268CAC string=0x0000000000268CB0 ""
 *   insn=0x0000000000268CB0 string=0x0000000000268CB4 ""
 *   insn=0x0000000000268CBC string=0x0000000000268CC0 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityComponent::Prepare(Caver::EntityComponent *this)
{
  __int64 result; // x0
  int v3; // w9
  __int64 v4; // x8
  _QWORD *v5; // x20
  _QWORD *i; // x21

  result = Caver::EntityComponent::RegisterLibrary(this);
  v3 = *((_DWORD *)this + 28);
  *((_DWORD *)this + 28) = 0;
  v4 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    *((_DWORD *)this + 28) = v3;
    *(_BYTE *)(v4 + 144) = v3 < 0;
  }
  *((_QWORD *)this + 15) = v4;
  v5 = *(_QWORD **)(v4 + 192);
  for ( i = *(_QWORD **)(v4 + 200); i != v5; ++v5 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *(__fastcall *)(Caver::CollisionShapeComponent *))(Caver::CollisionShapeComponent *__hidden)))(*(_QWORD *)*v5 + 160LL))(
               *v5,
               Caver::CollisionShapeComponent::Interface);
    if ( (result & 1) != 0 )
    {
      if ( *(_BYTE *)(*v5 + 379LL) )
        *(_QWORD *)(*v5 + 452LL) = 0x40E0000000000000LL;
    }
  }
  return result;
}

