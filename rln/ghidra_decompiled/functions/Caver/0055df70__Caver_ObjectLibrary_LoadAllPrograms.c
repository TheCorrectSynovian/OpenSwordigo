/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055df70
 * Function: Caver::ObjectLibrary::LoadAllPrograms
 * Signature: undefined __thiscall LoadAllPrograms(ObjectLibrary * this, ProgramState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::LoadAllPrograms(Caver::ProgramState*) */

void __thiscall Caver::ObjectLibrary::LoadAllPrograms(ObjectLibrary *this,ProgramState *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (this[0x80] == (ObjectLibrary)0x0) {
    for (puVar2 = *(undefined8 **)(this + 0x68); puVar2 != *(undefined8 **)(this + 0x70);
        puVar2 = puVar2 + 2) {
      ProgramState::ExecuteProgram(param_1,(Program *)*puVar2);
    }
    puVar2 = *(undefined8 **)(this + 0x38);
    puVar1 = *(undefined8 **)(this + 0x40);
    this[0x80] = (ObjectLibrary)0x1;
    for (; puVar2 != puVar1; puVar2 = puVar2 + 2) {
                    /* catch() { ... } // from try @ 0055dc50 with catch @ 0055dfcc */
      LoadAllPrograms((ObjectLibrary *)*puVar2,param_1);
                    /* try { // try from 0055dfd0 to 0065dff7 has its CatchHandler @ 0055dfd0
                       catch() { ... } // from try @ 0055dfd0 with catch @ 0055dfd0
                       catch() { ... } // from try @ 0055e054 with catch @ 0055dfd0
                       catch() { ... } // from try @ 0055e158 with catch @ 0055dfd0 */
    }
    this[0x80] = (ObjectLibrary)0x0;
  }
  return;
}


