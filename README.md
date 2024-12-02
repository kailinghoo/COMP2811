# After i18n Example

This directory contains the result of applying i18n, followed by l10n for
French-speaking locales, to the code in `before`.

Note, in particular:

* The changes to `CMakeLists.txt` that support the use of translations
* The use of `tr()` around all user-visible strings in `form.cpp`
* The strings translated to French in `form_fr.ts`
* The use of a `QTranslator` object in `main.cpp` to load translations

## Trying It Out

If you want to try this example out for yourself, you need to create the
appropriate version of `CMakeLists.txt`.

On SoCS machines, copy `MakeLists.txt.qt6_6` to `CMakeLists.txt`.
Otherwise, copy `MakeLists.txt.qt6_7` to `CMakeLists.txt`.

Then follow the usual process of creating a `build` subdirectory and
running `cmake ..` in that directory.
