/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d6344
 * Function: Caver::BinaryFile::BinaryFile
 * Signature: undefined __thiscall BinaryFile(BinaryFile * this, string * param_1, Mode param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BinaryFile::BinaryFile(std::string const&, Caver::BinaryFile::Mode, bool) */

void __thiscall Caver::BinaryFile::BinaryFile(BinaryFile *this,long *param_1)

{
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  if (*(long *)(*param_1 + -0x18) != 0) {
    Open();
    return;
  }
  return;
}


