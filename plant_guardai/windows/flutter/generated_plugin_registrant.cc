//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <currency_converter_pro/currency_converter_pro_plugin_c_api.h>
#include <file_selector_windows/file_selector_windows.h>

void RegisterPlugins(flutter::PluginRegistry* registry) {
  CurrencyConverterProPluginCApiRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("CurrencyConverterProPluginCApi"));
  FileSelectorWindowsRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("FileSelectorWindows"));
}
