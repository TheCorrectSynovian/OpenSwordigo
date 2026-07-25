/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8D80
 * Mangled: ._ZN5Caver12ProgramState16BoolAtStackIndexEi
 * Demangled: Caver::ProgramState::BoolAtStackIndex(int)
 *
 * Callers: 17
 *   0x000000000021B8D0  sub_21B8D0
 *   0x0000000000221318  sub_221318
 *   0x00000000002213A0  sub_2213A0
 *   0x000000000023DA20  sub_23DA20
 *   0x0000000000260514  sub_260514
 *   0x00000000002605C0  sub_2605C0
 *   0x000000000026064C  sub_26064C
 *   0x0000000000266668  sub_266668
 *   0x00000000002698F4  sub_2698F4
 *   0x000000000026D0EC  sub_26D0EC
 *   0x000000000026D1D8  sub_26D1D8
 *   0x000000000027F954  sub_27F954
 *   0x00000000003601E8  sub_3601E8
 *   0x0000000000469290  sub_469290
 *   0x0000000000476F4C  sub_476F4C
 *   0x000000000047704C  sub_47704C
 *   0x00000000004821C8  Caver::MusicPlayer::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callees: 1
 *   0x00000000004C1A20  Caver::ProgramState::BoolAtStackIndex(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8D88 string=0x00000000001F8D8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::BoolAtStackIndex(Caver::ProgramState *this, int a2)
{
  return _ZN5Caver12ProgramState16BoolAtStackIndexEi(this, a2);
}

