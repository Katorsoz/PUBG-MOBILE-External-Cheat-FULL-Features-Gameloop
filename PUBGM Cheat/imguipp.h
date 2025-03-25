
#ifndef IMGUIPP_H

#include "imgui-docking/imgui.h"
#include "imgui-docking/imgui_internal.h"
#include <string>
//#include "imgui.h"
//#include "imgui_internal.h"

//#include <string>
#include <vector>
#include <functional>

namespace imguipp
{
	void Line(int newId)
	{
		std::string id = ("imguipp_line_" + std::to_string(newId));
		ImGui::PushStyleColor(ImGuiCol_ChildBg, IM_COL32(0, 0, 0, 0));
		{
			ImGui::BeginChild(id.c_str(), ImVec2(ImGui::GetContentRegionAvail().x, 1), false);
			ImGui::Separator();
			ImGui::EndChild();
		}
		ImGui::PopStyleColor();
	}

	float getx();
	float gety();

	void button(const char* label, int& currentTab, int newTab, ImVec2 size = ImVec2());

	void line(int newId);
	void linevertical();

	void center_text(const char* text, int lineId, bool separator);
	void center_text_ex(const char* text, float width_available, int lineId, bool separator);

	namespace other
	{
		float get_window_size_x();
		float get_window_size_y();

		ImVec2 get_window_size();
		char* get_window_name();
		ImDrawList* get_drawlist();
	}

	ImVec4 to_vec4(float r, float g, float b, float a);

	void CenterText(const char* text, int lineId, bool separator)
	{
		if (text == nullptr)
			return;

		ImGui::Spacing();
		ImGui::SameLine((ImGui::GetContentRegionAvail().x / 2) - (ImGui::CalcTextSize(text).x / 2));
		ImGui::Text(text);
		ImGui::Spacing();

		if (true == separator)
			Line(lineId);
	}
	void CenterTextEx(const char* text, float width, int lineId, bool separator)
	{
		if (text == nullptr)
			return;

		ImGui::Spacing();
		ImGui::SameLine((width / 2) - (ImGui::CalcTextSize(text).x / 2));
		ImGui::Text(text);
		ImGui::Spacing();

		if (true == separator)
			Line(lineId);
	}

}
#define IMGUIPP_H
#endif
