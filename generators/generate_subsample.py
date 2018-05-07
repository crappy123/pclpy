from generators.generate_pybind11_bindings import generate, write_stuff_if_needed, get_headers


def ensure_required(headers):
    required = [
        ("", "point_cloud.h", "point_cloud.h"),
    ]
    for r in required:
        if r not in headers:
            headers.append(r)


def main():
    # headers = [
    #     ("filters", "filter.h", "relative_path"),
    #     ("filters", "filter_indices.h", "relative_path"),
    #     ("", "pcl_base.h", "relative_path"),
    # ]
    modules = ["registration"]
    headers = get_headers(modules)

    ensure_required(headers)
    generated_headers = generate(headers)
    write_stuff_if_needed(generated_headers, delete_others=True)


if __name__ == '__main__':
    main()
