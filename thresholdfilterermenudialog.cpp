#include "thresholdfilterermenudialog.h"

#include <cassert>
#include <iostream>

#include "trace.h"
#include "testtimer.h"

int ribi::ThresholdFiltererMenuDialog::ExecuteSpecific(const std::vector<std::string>& argv) noexcept
{
  #ifndef NDEBUG
  Test();
  #endif
  const int argc = static_cast<int>(argv.size());
  if (argc == 1)
  {
    std::cout << GetHelp() << '\n';
    return 1;
  }
  assert(!"TODO");
  return 0;
}

ribi::About ribi::ThresholdFiltererMenuDialog::GetAbout() const noexcept
{
  About a(
    "Richel Bilderbeek",
    "ThresholdFilterer",
    "tool to pixelate image",
    "January 8th of 2016",
    "2008-2016",
    "http://www.richelbilderbeek.nl/ToolThresholdFilterer.htm",
    GetVersion(),
    GetVersionHistory()
  );
  //a.AddLibrary("ProFile version: " + QtCreatorProFile::GetVersion());
  return a;
}

ribi::Help ribi::ThresholdFiltererMenuDialog::GetHelp() const noexcept
{
  return ribi::Help(
    this->GetAbout().GetFileTitle(),
    this->GetAbout().GetFileDescription(),
    {

    },
    {

    }
  );
}

std::string ribi::ThresholdFiltererMenuDialog::GetVersion() const noexcept
{
  return "3.0";
}

std::vector<std::string> ribi::ThresholdFiltererMenuDialog::GetVersionHistory() const noexcept
{
  return {
    "2008-03-01: version 1.0: initial Windows-only version",
    "2013-11-28: version 2.0: port to Qt",
    "2016-01-08: version 3.0: moved to own GitHub",
  };
}

#ifndef NDEBUG
void ribi::ThresholdFiltererMenuDialog::Test() noexcept
{
  {
    static bool is_tested{false};
    if (is_tested) return;
    is_tested = true;
  }
  const TestTimer test_timer(__func__,__FILE__,1.0);
}
#endif
