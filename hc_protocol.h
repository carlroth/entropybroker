int send_denied_empty(int fd, statistics *stats, config_t *config);
int send_denied_quota(int fd, statistics *stats, config_t *config);
int send_denied_full(client_t *client, pools *ppools, statistics *stats, config_t *config);
int send_accepted_while_full(client_t *client, config_t *config);
int send_got_data(int fd, pools *ppools, config_t *config);
int send_need_data(int fd, config_t *config);
int do_proxy_auth(client_t *client, config_t *config, users *user_map);
int do_client_get(pools *ppools, client_t *client, statistics *stats, config_t *config, fips140 *eb_output_fips140, scc *eb_output_scc, bool *no_bits);
int do_client_put(pools *ppools, client_t *client, statistics *stats, config_t *config, bool *new_bits, bool *is_full);
int do_client_server_type(client_t *client, config_t *config);
int do_client_kernelpoolfilled_reply(client_t *client, config_t *config);
int do_client_kernelpoolfilled_request(client_t *client, config_t *config);